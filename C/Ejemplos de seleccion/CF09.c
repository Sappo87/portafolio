/* CONTROL DE FLUJO */ 
/* SWITCH   CASE  */  
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
		int A , B , C ;
		
		printf("\n\n\t  INGRESE 3 VALORES   \n\n\t\t");
		scanf ("%d %d %d" , &A , &B , &C) ;
		
		if ( A > B && A > C )
				printf ("\n\n\t\t  MAYOR = %d" , A);
		else	
			if ( B > C )
				printf ("\n\n\t\t  MAYOR = %d" , B);
			else
				printf ("\n\n\t\t  MAYOR = %d" , C);
				
		printf("\n\n\n\n");
		return 0 ;
}
