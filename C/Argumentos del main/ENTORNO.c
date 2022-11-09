/* ARGUMENTOS DEL MAIN */  
/* VARIABLES DE ENTORNO */


#include <stdio.h>
#include <stdlib.h>

int main( int argc , char ** argv , char ** envp )
{
		char * * P ;
		
		for ( P = envp ; P != NULL ; P++)
				printf ("\n\n  \t %s " , *P );
		
		printf("\n\n\n\n");
		return 0 ;
}





