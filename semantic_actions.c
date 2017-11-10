#include "semantic_stack.c"

char *yytext = "Message"; 
int column = 0;
int row = 0;

void save_type_stack(){
	struct sem_register * RS;
	RS = create_RS (TYPE);
	struct TYPE_data_block * type_temp = (struct TYPE_data_block*) RS->data_block;
	type_temp->type_name = yytext;
	type_temp->row = row;
	type_temp->column = column;
	push(RS);
}

void save_id_stack(){
	struct sem_register * RS;
	RS = create_RS (ID);
	struct ID_data_block * id_temp = (struct ID_data_block*) RS->data_block;
	id_temp->text = yytext;
	id_temp->row = row;
	id_temp->column = column;
	push(RS);
}

void end_decl(){
	struct sem_register * RS;
	RS = retrieve(TYPE);
	struct TYPE_data_block * type = (struct TYPE_data_block*) RS->data_block;
	while(top->tag == ID){
		struct ID_data_block * id = (struct ID_data_block*) top->data_block;
		insert_TS (id->text, type->type_name);
		pop();
	}
	pop();
}

void process_literal(){
	struct sem_register * RS;
	RS = create_RS(DATA_OBJECT);
	struct DO_data_block * do_temp = (struct DO_data_block*) RS->data_block;
	do_temp->data_type = LITERAL;
	do_temp->value = yytext;
	do_temp->row = row;
	do_temp->column = column;
	push(RS);
}

void process_id(){
	struct sem_register * RS;
	char *id;
	id = yytext;
	RS = create_RS(DATA_OBJECT);
	struct DO_data_block * do_temp = (struct DO_data_block*) RS->data_block;
	do_temp->data_type = ID_DO;
	/* funcion de lookupTS
	*/
	do_temp->name = id;
	do_temp->row = row;
	do_temp->column = column;
	push(RS);
}

void process_op(){
	struct sem_register * RS;
	RS = create_RS(TOKEN);
	struct OP_data_block * op_temp = (struct OP_data_block*) RS->data_block;
	op_temp->operator = yytext;
	op_temp->row = row;
	op_temp->column = column;
	push(RS);
}

// Funciones con la pila //

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
	table->table_current->current->name = id;
	table->table_current->current->type = type;
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
	table->table_current->next = (struct tbl_symbol *) malloc (sizeof(struct tbl_symbol));
	table->table_current = table->table_current->next;
	table->table_current->next = NULL; 
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
		if (strcmp(symbol->name,word) == 0){
			return 1;
		}
		symbol = symbol->next;
	}
	return isInTheTable;
}

void print_TS(){\
	int context = 1;
	if (table == NULL){
		printf("La tabla esta vacia ... mamon .\n");
		return;
	}
	printf("\n Tabla de simbolos \n");
	struct tbl_symbol *table_temp = table->table_head;
	while(table_temp != NULL){
		printf(" Pila Semantica # %d \n", context);
		// Revise todos los valores de esa tabla.
		struct elem * elem_temp = table_temp->head;
		while(elem_temp != NULL){
			printf(" ---- %s %s; \n",elem_temp->type, elem_temp->name);
			elem_temp = elem_temp->next;
		}
		table_temp = table_temp->next;
		context++;
	}
}

void kill_symbol_table(){
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

int main(){
	
	// Creo la primera tabla.
	yytext = "int";
	save_type_stack();
	yytext = "cabea";
	save_id_stack();
	end_decl();
	yytext = "char";
	save_type_stack();
	yytext = "salada";
	save_id_stack();
	end_decl();
	yytext = "int";
	save_type_stack();
	yytext = "store";
	save_id_stack();
	end_decl();

	// Agrego una tabla de simbolos a la pila.
	add_new_TS();
	yytext = "int";
	save_type_stack();
	yytext = "com";
	save_id_stack();
	end_decl();

	// Agrego una nueva tabla de simbolos a la pila.
	add_new_TS();
	yytext = "int";
	save_type_stack();
	yytext = "cont";
	save_id_stack();
	end_decl();
	yytext = "char";
	save_type_stack();
	yytext = "specify";
	save_id_stack();
	end_decl();

	int x = lookup("cont");
	int m = lookup("trake");
	int k = lookup("cabea");
	int r = lookup_All("cabea");
	printf("Esta 'cont' en contexto local de la tabla : %d \n", x);
	printf("Esta 'trake' en contexto local de la tabla : %d \n", m);
	printf("Esta 'cabea' en contexto local de la tabla : %d\n", k);
	printf("Esta 'cabea' en contexto global de la tabla : %d\n", r);
	print_TS();
	kill_stack();
	kill_symbol_table(); // Elimina todos los valores reservados de memoria con relacion a la tabla de simbolos
	return 0;
}