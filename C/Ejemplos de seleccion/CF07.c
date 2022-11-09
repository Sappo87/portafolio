/* CONTROL DE FLUJO */ 
/* SWITCH   CASE  */  
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
		int SEL ;
		
		printf("\n\n\t  SELECCION  =  ");
		scanf ("%d" , &SEL) ;
		
		switch ( SEL ) {
				case 1  : printf("\n\n\t\t UNO"); 
						  break ;
				case 2  : printf("\n\n\t\t DOS");
				          break ;
				case 3  : printf("\n\n\t\t TRES");
				          break ;
				default : printf("\n\n\t\t OTRO VALOR");
				          break ;
		}
				
		printf("\n\n\n\n");
		return 0 ;
}
