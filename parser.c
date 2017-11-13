#define COLOR_RESET  "\x1B[0m"
#define COLOR_RED  "\x1B[31;1m"
#define COLOR_GREEN "\x1B[32;1m"
#define COLOR_YELLOW "\x1B[33m"
#define COLOR_BLUE  "\x1B[34m"
#define COLOR_PURPLE  "\x1B[35m"
#define COLOR_BLUE_LIGHT  "\x1B[36m"
#define COLOR_WHITE  "\x1B[0m"
#define MAX_LINE_PRINT 1020
#include "lex.yy.c"
#include "bison.tab.c"
//#include "beamer.c"
FILE *myfile;
FILE *output;

typedef struct{
    int kind;
    char* value;
}token;

token get_token(){
    token tok;
    tok.kind = yylex();
    tok.value = yytext;

    return tok;
}

int main(int argc, char **argv){

	if(argc < 2) {
		fprintf(stderr, "\nPor favor ingrese el archivo a analizar\n");
		fprintf(stderr, "Ejemplo: \n");
		fprintf(stderr, "./program mi_archivo.c \n");
		//fprintf(stderr, "./program -B mi_archivo.c \n\n");
		//fprintf(stderr, "*** Con la opcion -B se produce una presentacion beamer con los resultados.***\n");
		//fprintf(stderr, "*** Sin la opcion -B se muestran los resultados en la consola.***\n\n");
		return 1;
	}

	processed_file = fopen("processed_file.c", "w");
	myfile = fopen(argv[1], "r");
	output = stdout;

	if (!myfile) {
		printf("Error al leer el archivo.\n");
		return -1;
	}
	
	yyin = myfile;
	yyout = processed_file;

	do {
		yyparse();
	} while (!feof(yyin));

	if (counter > 0){
		fprintf(stderr, "Se detectaron %d errores. \n\n", counter);
	}
	
	fclose(myfile); 
	fclose(processed_file); //cerramos los archivos para abrirlo en modo lectura

	myfile = fopen("processed_file.c", "r");

	/* presentar el codigo en pantalla o en beamer (tomado del preproceso)
	if(beamer_flag == 1){
		fclose(fileErrors);
		fileErrors = fopen("errorsBeamer.txt", "r");
		init_beamer();
		cover();
		bison_and_parsing();
		code();
		close_beamer();
		fclose(fileErrors);
	}

	fclosemyfile);
	//fclose(processed_file);
	fclose(fileErrors);
	*/

	fclose(myfile);
}
