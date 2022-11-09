/* ARCHIVOS DE TEXTO 03 */  
/* LECTURA DE UN ARCHIVO DE TEXTO */  

#include <stdio.h>
#include <stdlib.h>

int main()
{
		char CAR ;
		FILE * FP ;
		
		if ( (FP = fopen ("ARCH02.C","r")) == NULL ) {
				printf("\n\n ERROR APERTURA DE ARCHIVO \n\n") ;
				exit(1);			
		};
		printf("\n\n   CONTENIDO DEL ARCHIVO \n\n");
		CAR = getc(FP);
		while ( CAR != EOF ) {
				putchar ( CAR );
				CAR = getc(FP);
		}
				
		fclose(FP);
		
		return 0 ;
}
