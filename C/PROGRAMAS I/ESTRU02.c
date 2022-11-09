/* PASAJE DE ESTRUCTURAS A FUNCION */ 
/* TRANSFERENCIA INCORRECTA  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
		struct {
				short int NUM ;
				char CAR ;
				float F ;
		} X , Y ;
					
		X.NUM = 234 ;
		X.CAR = 'H' ;
		X.F   = 7.9845 ;
				
		printf ("\n\n   X.NUM = %d   X.CAR = %c   X.F = %f " , 
		X.NUM , X.CAR , X.F);	
		
		FUNCION ( X ) ;		
									
		printf("\n\n\n\n FIN DEL PROGRAMA\n\n");
		return 0 ;
}

int FUNCION ( struct { char CAR ; float F ; short int NUM } Y )
{
		printf("\n\n\n  DENTRO DE LA FUNCION (transferencia incorrecta) \n\n");
		printf ("\n\n   Y.NUM = %d   Y.CAR = %c   Y.F = %f " , 
		Y.NUM , Y.CAR , Y.F);
		return 0 ;	
}
