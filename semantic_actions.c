#include "semantic_stack.c"
#include <stdlib.h>
#include <string.h>

extern char* yytext;

// Funciones con la pila //

void save_type_stack(){
	struct sem_register * RS;
	RS = create_RS (STACK_TYPE);
	struct TYPE_data_block * type_temp = (struct TYPE_data_block*) RS->data_block;
	type_temp->type_name = strdup(yytext);
	//printf("Se hizo push de un registro con TIPO: %s\n", yytext);
	push(RS);
}

void save_id_stack(){
	struct sem_register * RS;
	RS = create_RS (STACK_ID);
	struct ID_data_block * id_temp = (struct ID_data_block*) RS->data_block;
	id_temp->text = strdup(yytext);
	printf("Se hizo push de un registro con ID: %s\n", yytext);
	push(RS);
}

void end_decl(){
	struct sem_register * RS;
	RS = retrieve(STACK_TYPE);
	struct TYPE_data_block * type = (struct TYPE_data_block*) RS->data_block;
	while(top->tag == STACK_ID){
		struct ID_data_block * id = (struct ID_data_block*) top->data_block;
		insert_TS (id->text, type->type_name);
		pop();
		printf("Se ha popeado e insertado en la TS\n");
	}
	pop();
}

void insert_TS(char *id, char *type){
	if (table == NULL){
		add_new_TS();
		//table = (struct table_symbol_stack *) malloc (sizeof(struct table_symbol_stack)); // crea la pila de tablas de simbolos
	}
	if(table->table_head == NULL){
		add_new_TS();
		//table->table_head = table->table_current = (struct tbl_symbol *) malloc (sizeof(struct tbl_symbol)); // crea la primera tabla de simbolos
	}
	// Inserte en la tabla de simbolos actual.
	if(table->table_current->head == NULL){
		// Si la tabla actual esta vacia.. inserte el primer elemento.
		table->table_current->head = table->table_current->current = (struct elem *) malloc (sizeof(struct elem)); // Crea el primer elemento de la tabla de simbolos
	}else{
		// Insertar el elemento siguiente.
		table->table_current->current->next = (struct elem *) malloc (sizeof(struct elem));
		table->table_current->current = table->table_current->current->next;
	}
	table->table_current->current->name = strdup(id);
	table->table_current->current->type = strdup(type);
}

void add_new_TS(){
	if (table == NULL){
		table = (struct table_symbol_stack *) malloc (sizeof(struct table_symbol_stack)); // crea la pila de tablas de simbolos
	}
	if(table->table_head == NULL){
		table->table_head = table->table_current = (struct tbl_symbol *) malloc (sizeof(struct tbl_symbol)); // crea la primera tabla de simbolos
		table->table_current->next = NULL; 
		return;
	}
	printf("Se va a caer...\n");
	table->table_current->next = (struct tbl_symbol *) malloc (sizeof(struct tbl_symbol));
	table->table_current = table->table_current->next;
	table->table_current->next = NULL; 
	printf("Sobrevivio...\n");
}

// Revisa si hay una variable desde un contexto global.

int lookup_All(char * word){
	int isInTheTable = 0;
	if (table == NULL){
		return isInTheTable;
	}
	struct tbl_symbol *tbl_symbol_temp = table->table_head; // Referencia al primer elemento de la pila de tablas de simbolos.
	while (tbl_symbol_temp != NULL){
		struct elem *symbol = tbl_symbol_temp->head; // Referencia a la primera tabla de simbolos de 
		while (symbol != NULL){
			if (strcmp(symbol->name,word) == 0){
				return 1;
			}
			symbol = symbol->next;
		}
		tbl_symbol_temp = tbl_symbol_temp->next;
	}
	return isInTheTable;
}

// Revisa si hay una variable desde un contexto local.

int lookup(char * word){
	int isInTheTable = 0;
	if (table == NULL){
		return isInTheTable;
	}
	if (table->table_head == NULL){
		return isInTheTable;
	}
	struct elem *symbol = table->table_current->head; // Referencia a la primera tabla de simbolos de 
	while (symbol != NULL){
		//printf("ELEMENTO: %s\n", symbol->name);
		if (strcmp(symbol->name, word) == 0){
			return 1;
		}
		symbol = symbol->next;
	}
	return isInTheTable;
}

void ck_decl(){
	char *id;
	id = yylval.sval;
	printf("JSUGYUSGYUSGDYGDYGDIGDIUGDIGDIUDGIUD %s\n", id);
	if(!lookup (id)){
		process_error(id);
	}
}

void print_ST(){
	int context = 1;
	if (table == NULL){
		printf("La tabla esta vacia ... \n");
		return;
	}
	printf("\n Tabla de simbolos \n");
	struct tbl_symbol *table_temp = table->table_head;
	while(table_temp != NULL){
		printf(" Pila Semantica # %d \n", context);
		// Revise todos los valores de esa tabla.
		struct elem * elem_temp = table_temp->head;
		while(elem_temp != NULL){
			printf(" ---- %s %s \n",elem_temp->type, elem_temp->name);
			elem_temp = elem_temp->next;
		}
		table_temp = table_temp->next;
		context++;
	}
}

void kill_stack_ST(){
	if (table == NULL){
		return;
	}
	while(table->table_head != NULL){
		while(table->table_head->head != NULL){
			struct elem * death_value = table->table_head->head;
			table->table_head->head = table->table_head->head->next;
			free(death_value);
		}
		struct tbl_symbol *death_table= table->table_head;
		struct tbl_symbol *temp_next_element = table->table_head->next;
		table->table_head->next = NULL;
		table->table_head = temp_next_element;
		free(death_table);
		temp_next_element = NULL;
	}
	free(table);
}

/* Semantica */

void process_literal(){
	struct sem_register * RS;
	RS = create_RS(STACK_DATA_OBJECT);
	struct DO_data_block * do_temp = (struct DO_data_block*) RS->data_block;
	do_temp->data_type = DO_LITERAL;
	do_temp->value = yytext;
	push(RS);
}

void process_id(){
	struct sem_register * RS;
	char *id;
	id = yytext;
	RS = create_RS(STACK_DATA_OBJECT);
	struct DO_data_block * do_temp = (struct DO_data_block*) RS->data_block;
	
	if(lookup (id)){
		do_temp->data_type = DO_ID;
		do_temp->name = id;
	}else{
		do_temp->data_type = DO_ERROR;
	}
	push(RS);
}

void process_op(){
	struct sem_register * RS;
	RS = create_RS(STACK_TOKEN);
	struct OP_data_block * op_temp = (struct OP_data_block*) RS->data_block;
	op_temp->operator = yytext;
	push(RS);
}

void eval_binary() {
	/*op1 = POP();
	operador = POP();
	op2 = POP();
	Si alguno es de tipo ERROR: Crear D.O de tipo ERROR;
	else:
	Si no se requiere generar código: Crear D.O con resultado  calculado; //verificar todos los casos
	else:
	Crear variable temporal; //crear esta función
	Generar código para temporal con op1, operador, op2; //verificar
	para cada operador
	Crear D.O con referencia a temporal;
	}
	}
	PUSH(D.O);*/
}

void begin_if (){
	/*
	TEMP = DO.name;
	POP(); //PS
	//Llamo a la rutina magica que cree etiquetas
	L = generate_label ();
	/*generate_label () s facil, variable entera tipo static. Static local,
	global privada solo para guardar el numero actual de L
	//Generar codigo que sea equivalente a BZ TEMP, L
	Exit_label = L
	Push(IF)
	*/
	printf("INICIO_IF\n");
	struct sem_register * RS;
	RS = create_RS(STACK_IF);
	struct IF_data_block * if_temp = (struct IF_data_block*) RS->data_block;
	if_temp->exit_label = generate_label();
	printf("Label: %s\n", if_temp->exit_label);
	//push(RS);
}

void inicio_else(){
	/*//Si todo esta bien, cuando corra, tiene que estar en la PS, un RS tipo If
	//Genera el JMP L2
	Retrieve (IF)
	//Tengo a mano L2 y L1
	//Genera el JMP a L2
	//Genera etiqueta L1
	*/
}

void fin_if(){
	/*
	Retrieve (IF);
	genera_codigo(L) //para poner la etiqueta
	Delete (IF)
	*/
}

void inicio_while() {
	/*Crear RS “while”
	begin_Label←nueva etiqueta();
	exit_label←nueva etiqueta();
	push(while)
	generate_code(begin_label);
	*/
}
void eval_while() {
	/*variable= DO; pop();
	ExitLabel= while_exit;
	generate_code(CMP Temp , 0);
	generate_code(JZ exit);
	fin_while()*/
}

void fin_while(){	
	/*begin label  while...
	end label  while…
	Pop();
	generate_code(JMP begin)
	generate_code(Exit:)*/
}

void begin_for() {
	/*Create_RS(FOR)
	begin_label
	exit_label
	inst3 = generar_temp()
	NOTA: este puede ser puede ser puntero a bloque, nombre de archivo temporal
	para inst3.
	push();*/
}

void vi_inst1_for() {
	/*Retrieve(for)
	begin  for
	generate_code(begin)*/
}

void test_for(){
	/*Retrieve(DO)
	temp  DO
	pop();
	retrieve(for)
	generate_code(cmp temp,0)
	generate_code(jz,exit)*/
}
/*
void redirigir_codigo() ​{
	//Aqui iria el codigo para el archivo temporal
}
*/
void restore_code() {
	//redirige para que el que traduzca bloque instrucciones siga generando el código
}

void fin_for(){
	/*voy al registro semántico tipo for
	Ahí está puntero a instrucción 3
	Leo de archivo oficial
	Destruyó archivo temporal
	Generate_code(jmp begin)
	Generate_code(jmp exit)
	Pop() ya no ocupo el registro semántico*/
}

void process_error(char* id){
	struct sem_register * RS;
	RS = create_RS(STACK_DATA_OBJECT);
	struct DO_data_block * do_temp = (struct DO_data_block*) RS->data_block;
	do_temp->value = DO_ERROR;
	printf("Variable no declarada %s\n", id);
	push(RS);
}

char* generate_label(){
	static int label_count = 0;
	char* new_label;
	sprintf(new_label, "lbl%d", label_count);
  	label_count++;
  	return new_label;
}

void print_yytext(){
	printf("YYTEXT: %s\n", yytext);
}

void exit_semantics(){
	//print_stack();
	print_ST();
 	kill_stack_ST();
}