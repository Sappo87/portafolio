/* STRINGS  */
/*  USO DE STRLEN()  */  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
		char STR[20] ; 
				
		printf("\n\n\n INGRESE UNA FRASE  :   " );
		gets(STR) ;
		
		printf("\n\n\n %s MIDE %d CARACTERES" , STR , strlen(STR) );
		printf("\n\n\n PERO STR MIDE %d BYTES" , sizeof(STR) );
				
		printf("\n\n\n\n\n");
		return 0 ;
}


