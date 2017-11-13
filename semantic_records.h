// Variables usadas por la pila semantica

enum stack_tag{STACK_ID, STACK_TYPE, STACK_DATA_OBJECT, STACK_TOKEN, 
				STACK_IF, STACK_FOR, STACK_WHILE, STACK_SWITCH};

enum DO_types {DO_LITERAL, DO_CONSTANT, DO_ID, DO_ERROR, DO_WHILE};

enum table_symbol_types { TST_IDEXPR, TST_LITERALEXPR, TST_TEMPEXPR };

/* Pila Semantica */

struct sem_register {
	struct sem_register * next;
	struct sem_register * previous;
	enum stack_tag tag;
	void * data_block;
};

/* Bloques de datos  */

struct ID_data_block{
	char* text;
};

struct TYPE_data_block{
	union{
		char* type_name;
	};
};

struct DO_data_block{
	enum DO_types data_type;
	union{
		char* name;
		char* value;
	};
};

struct OP_data_block{
	union{
		char* operator;
	};
};

struct IF_data_block{
	char* exit_label;
};

/* Tabla de simbolos */

struct elem {
	struct elem *next;
	enum table_symbol_types kind;
	char* type;
	char* name;
};

struct tbl_symbol{
	struct tbl_symbol *next;
	struct elem* head;
	struct elem* current;
	struct elem* temp;
};

/*
	La tabla de símbolos es una estructura que simila una lista enlazada, 
	donde almacena una estructura elem que a su vez simila ser una lista de valores necesarios.
*/

struct table_symbol_stack{
	struct tbl_symbol *table_current;
	struct tbl_symbol *table_head;
	// No se que mas agregar
};

struct table_symbol_stack * table;

// Prototipos de funcion

void push(struct sem_register *rs);

void pop();

struct sem_register * retrieve(enum stack_tag tag);

void delete(enum stack_tag tag);

struct sem_register * create_RS(enum stack_tag tag);

void delete_DB(struct sem_register * block);

void print_stack();

void save_type_stack();

void save_id_stack();

void end_decl();

void insert_TS(char *id, char *type);

void add_new_TS();

int lookup_All(char * word);

int lookup(char * word);

void ck_decl();

void print_ST();

void kill_stack_ST();

/* Semantica */

void process_literal();

void process_id();

void process_op();

void eval_binary();

void begin_if ();

void begin_else();

void end_if();

void begin_while();

void eval_while();

void end_while();

void begin_for();

void vi_inst1_for();

void test_for();

void redirigir_codigo();

void restore_code();

void end_for();

void process_error();

char* generate_label();

void exit_semantics();