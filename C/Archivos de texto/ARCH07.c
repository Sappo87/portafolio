/* ARCHIVOS DE TEXTO 04 */  
/* USO  FEOF() */  

#include <stdio.h>
#include <stdlib.h>

int main()
{
		unsigned char CAR ;
		FILE * FP ;
		
		if ( (FP = fopen ("ARCH02.EXE","rb")) == NULL ) {
				printf("\n\n ERROR APERTURA DE ARCHIVO \n\n") ;
				exit(1);			
		};
		
		printf("\n\n   CONTENIDO DEL ARCHIVO \n\n");
		CAR = getc(FP);
		while ( ! feof(FP) ) {
				printf ("%02X  " , CAR );
				CAR = getc(FP);
		}
				
		fclose(FP);
		
		return 0 ;
}
