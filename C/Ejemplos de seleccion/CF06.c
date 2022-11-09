/* CONTROL DE FLUJO */ 
/* ESCALONADOR  */  
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
		int EDAD = 27 ;
		
		if ( EDAD < 12 )
			printf ( " \n\n\t CATEGORIA  :  INFANTIL" );
		else 
			if ( EDAD < 18 )
				printf ( " \n\n\t CATEGORIA  :  JUVENIL" );	
			else
				if ( EDAD < 60 )
					printf ( " \n\n\t CATEGORIA  :  ACTIVO" );		
				else
					printf ( " \n\n\t CATEGORIA  :  VITALICIO" );			
		
		printf("\n\n\n\n");
		return 0 ;
}
