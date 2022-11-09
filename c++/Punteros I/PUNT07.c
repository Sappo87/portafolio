/* PUNTEROS 07 */  
/* PUNTEROS Y VECTORES   */  

#include <stdio.h>
#include <stdlib.h>

#define N 8

int main()
{
		int VEC[N] ;
		int I ;
		int *P ;
		
		/* CARGA DEL VECTOR   */
		for ( P = VEC ; P < VEC+N ; P++ ) {
			printf ("\n  DATO = " );
			scanf("%d" , P ) ;
		}
		
		/* IMPRESION 1   */
		printf("\n\n\n\t\t IMPRESION 1 DEL VECTOR\n\n\t");		
		for ( P = VEC ; P < VEC+N ; P++ ) 
			printf ("%8d" , *P ) ;
		
		/* IMPRESION 2   */
		printf("\n\n\n\t\t IMPRESION 2 DEL VECTOR\n\n\t");		
		for ( P = VEC , I = 0 ; I < N ; I++ ) 
			printf ("%8d" , *(P+I) ) ;
		
		
		printf("\n\n\n");
		return 0 ;
}


