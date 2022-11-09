/* PASAJE DE ESTRUCTURAS A FUNCION */ 
/* TIPOS  GLOBALES      VARIABLES  LOCALES  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*  TIPO GLOBAL  */
struct ALFA{
		short int NUM ;
		char CAR ;
		float F ;
} ;

void FUNCION ( struct ALFA );

int main()
{
		struct ALFA X ;
					
		X.NUM = 234 ;
		X.CAR = 'H' ;
		X.F   = 7.9845 ;
				
		printf ("\n\n   X.NUM = %d   X.CAR = %c   X.F = %f " , 
		X.NUM , X.CAR , X.F);	
		
		FUNCION ( X ) ;		
									
		printf("\n\n\n\n FIN DEL PROGRAMA\n\n");
		return 0 ;
}

void FUNCION ( struct ALFA Y )
{
		printf("\n\n\n  DENTRO DE LA FUNCION \n\n");
		printf ("\n\n   Y.NUM = %d   Y.CAR = %c   Y.F = %f " , 
		Y.NUM , Y.CAR , Y.F);
}
