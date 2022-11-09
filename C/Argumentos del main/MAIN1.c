/* ARGUMENTOS DEL MAIN */  
/* LINEA DE COMANDOS */

#include <stdio.h>
#include <stdlib.h>

int main( int argc , char ** argv )
{
		int I ;
		
		printf ("\n\n  LA CANTIDAD DE ARGUMENTOS ES %d \n\n" , argc );
		
		for ( I = 0 ; I < argc ; I++)
				printf ("\n\n  %10p \t %s " , *(argv+I) , *(argv+I) );
		
		printf("\n\n\n\n");
		return 0 ;
}





