// Funciones semánticas

#include <stdio.h>
#include <stdlib.h>
#include "semantic_records.h"

/* Operaciones realizadas en la pila
 --------------------------------- 
   Las operaciones que se van a realizar son:
   - push () -> pone un nuevo 
   - pop () -> elimina el de la pila
   - retrieve () -> retorna el registro con el tag correspondiente.
   - delete () -> elimina el registro con el tag correspondiente.
*/

struct sem_register *top;

void push(struct sem_register *rs){
	rs->previous = top;
	rs->next = NULL;
	if (top != NULL){
		top->next = rs;
	}
	top = rs;
}

void pop(){
	if(top != NULL){
		struct sem_register *temp = top;
		top = top->previous;
		delete_DB(temp); // Libera el data_block que posea.
		free(temp);
	}
}

struct sem_register * retrieve(enum stack_tag tag){
	struct sem_register * temp = top;
	while (temp != NULL){
		if (temp->tag == tag){
			return temp;
		}
		temp = temp->previous;
	}
	return NULL; // Error en la pila no hay del tipo esperado.
}

void delete(enum stack_tag tag){
	struct sem_register * temp = retrieve(tag);
	if (temp == NULL){
		return; // Error en la pila no hay del tipo esperado.
	}
	if (temp->previous != NULL){
		temp->previous->next = temp->next;
	}
	if (temp->next != NULL){
		temp->next->previous = temp->previous;
	}
	if (temp == top){
		pop();
		return;
	}
	delete_DB(temp); // Libera el data_block que posea.
	free(temp);
}

/* Register declarations

	createDB
	deleteDB
*/

struct sem_register * create_RS(enum stack_tag tag){
	struct sem_register * sem_reg = (struct sem_register*) malloc(sizeof(struct sem_register)); // Creo el registro semantico de la pila.
	sem_reg->tag = tag;
	if (tag == STACK_ID){
		sem_reg->data_block = (struct ID_data_block*) malloc(sizeof(struct ID_data_block)); // Si es ID, creo ID_data_block.
	}else if(tag == STACK_DATA_OBJECT){
		sem_reg->data_block = (struct DO_data_block*) malloc(sizeof(struct DO_data_block)); // Si es DO, creo DO_data_block.
	}else if(tag == STACK_TOKEN){
		sem_reg->data_block = (struct OP_data_block*) malloc(sizeof(struct OP_data_block)); // Si es Token, creo el OP_data_block
	}else if(tag == STACK_IF){
		sem_reg->data_block = (struct IF_data_block*) malloc(sizeof(struct IF_data_block)); // Si es IF, creo el IF_data_block
	}else if(tag == STACK_TYPE){
		sem_reg->data_block = (struct TYPE_data_block*) malloc(sizeof(struct TYPE_data_block)); // Si es un Tipo, creo el TYPE_data_block
	}
	return sem_reg;
}

void delete_DB(struct sem_register * block){
	if (block->tag == STACK_ID){
		struct ID_data_block * id_temp = (struct ID_data_block*) block->data_block;
		//free(id_temp->text);
	}else if(block->tag == STACK_DATA_OBJECT){
		struct DO_data_block * do_temp = (struct DO_data_block*) block->data_block;
		//free(do_temp->name);
		//free(do_temp->value);
	}else if(block->tag == STACK_TOKEN){
		struct OP_data_block * op_temp = (struct OP_data_block*) block->data_block;
		//free(op_temp->operator);
	}else if(block->tag == STACK_IF){
		struct IF_data_block * if_temp = (struct IF_data_block*) block->data_block;
		//free(if_temp->name);
	}else if(block->tag == STACK_TYPE){
		struct TYPE_data_block * type_temp = (struct TYPE_data_block*) block->data_block;
		//free(type_temp->type_name);
	}
	free(block->data_block);
}

// Este procedimiento al final del programa para liberar todo tipo de memoria que haya sido usada en el programa.
void kill_stack(){
	while (top != NULL){
		pop();
	}
}

void print_stack(){
	int i = 1;
	struct sem_register * temp = top;
	printf("-------------------\n");
	while(temp != NULL){
		printf("(%d) %d <- ", i, temp->tag);
		i++;
		temp = temp->previous;
	}
	printf("\n -------------------\n");
}