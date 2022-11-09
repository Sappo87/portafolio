/* PUNTEROS 04 */  
/* ARITMETICA DE PUNTEROS :  DIFERENCIA DE PUNTEROS  */  

#include <stdio.h>
#include <stdlib.h>

int main()
{
		int * P , * Q ;
		
		P = (int *)0x2000 ;
		Q = (int *)0x200A ;
		
		printf ("\n\n  DIFERENCIA   Q - P = %d \n\n" , Q - P );
		
		return 0 ;
}
