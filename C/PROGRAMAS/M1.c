/* MATRICES  */  

#include <stdio.h>
#include <stdlib.h>

#define FILAS    3
#define COLUMNAS 4


int main()
{
		int MAT[FILAS][COLUMNAS] ;
		int I , J ;
		
		/*  CARGA DE LA MATRIZ  */
		for ( I = 0 ; I < FILAS ; I++ )
				for ( J = 0 ; J < COLUMNAS ; J++ ) {
						printf("\n\t\t MAT[%d][%d] = " , I , J );
						scanf("%d" , &MAT[I][J] );
				}
						
		/*  IMPRESION DE LA MATRIZ  */
		printf("\n\n\n        IMPRESION DE LA MATRIZ \n\n\n");
		for ( I = 0 ; I < FILAS ; I++ ) {
				printf("\n\n\t\t");
				for ( J = 0 ; J < COLUMNAS ; J++ ) 
						printf("%8d" , MAT[I][J] );
		}
		
		printf("\n\n\n\n\n");
		return 0 ;
}


