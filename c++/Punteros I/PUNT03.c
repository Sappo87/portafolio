/* PUNTEROS 03 */  
/* ARITMETICA DE PUNTEROS */  

#include <stdio.h>
#include <stdlib.h>

int main()
{
		short int * P ;
		float * Q ;
		
		printf ("\n\n  SHORT INT = %d      FLOAT = %d \n\n" , 
		sizeof(short int) , sizeof(float) );
		
		P = (short int *)0x2000 ;
		Q = (float *)0x2000 ;
		
		printf ("\n\n  P = %X         Q = %X \n\n" , P , Q );
		
		P = P + 4 ;
		Q = Q + 4 ;
		
		printf ("\n\n  P = %X         Q = %X \n\n" , P , Q );
		
		return 0 ;
}
