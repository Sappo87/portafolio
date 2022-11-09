/* CONTROL DE FLUJO */ 
/* SELECCION */  
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
		int A , B , LOGICA ;
		A = 20 ;
		B = 7 ;
		
		LOGICA = A > B ;
		if ( LOGICA )
				printf ( " \n\n\t %d ES MAYOR QUE %d" , A , B );
		else
				printf ( " \n\n\t %d ES MENOR O IGUAL QUE %d" , A , B );		
		
		printf ("\n\n\t\t LOGICA = %d" , LOGICA);
		
		printf("\n\n\n\n");
		return 0 ;
}
