/* PUNTEROS 02 */  

#include <stdio.h>
#include <stdlib.h>

int main()
{
		int A ;
		int * P ;
		float * Q ;
		
		
		A = 25 ;
		P = &A ;
					
		Q = (float *)P ;
		
		printf ("\n\n  P = %p      Q = %p \n\n" , P , Q );
		
		P = (int *)0XFF22FEB8 ;
		
		printf ("\n\n  P = %p      Q = %p \n\n" , P , Q );
		
		printf ("\n\n  *P = %d      *Q = %f \n\n" , *P , *Q );
		
		
		return 0 ;
}
