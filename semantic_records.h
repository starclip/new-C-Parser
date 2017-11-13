// Variables usadas por la pila semantica

enum stack_tack{ID, TYPE, DATA_OBJECT, TOKEN, IF, FOR, WHILE, SWITCH};

enum DO_types {LITERAL, CONSTANT, ID_DO, ERROR, WHILE};

enum table_symbol_types { IDEXPR, LITERALEXPR, TEMPEXPR };

/* Pila Semantica */

struct sem_register {
	struct sem_register * next;
	struct sem_register * previous;
	enum stack_tack tag;
	void * data_block;
};

/* Bloques de datos  */

struct ID_data_block{
	union{
		char* text;
	};
	int row;
	int column;
};

struct TYPE_data_block{
	union{
		char* type_name;
	};
	int row;
	int column;
};

struct DO_data_block{
	enum DO_types data_type;
	union{
		char* name;
		char* value;
	};
	int row;
	int column;
};

struct OP_data_block{
	union{
		char* operator;
	};
	int row;
	int column;
};

struct IF_data_block{
	union{
		char* name;
	};
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

struct sem_register * retrieve(enum stack_tack tag);

void delete(enum stack_tack tag);

struct sem_register * create_RS(enum stack_tack tag);

void delete_DB(struct sem_register * block);

void print_stack();

void save_type_stack();

void save_id_stack();

void end_decl();

void insert_TS(char *id, char *type);

void add_new_TS();