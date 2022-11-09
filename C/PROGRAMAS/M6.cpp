/* MATRICES  */ 
/* RELACION DE DIAGONALES  */ 

#include <stdio.h>
#include <stdlib.h>

#define FILAS    8
#define COLUMNAS 8

void CARGAR1 ( int [][COLUMNAS] , int , int );
void CARGAR2 ( int [][COLUMNAS] , int , int );
void MIRAR ( int [][COLUMNAS] , int , int );

int main()
{
		int MAT[FILAS][COLUMNAS] ;
		srand(567);
		
		CARGAR1 ( MAT , FILAS , COLUMNAS );
		printf("\n\n\n MAT[I][J] = I+J  \n");
		MIRAR ( MAT , FILAS , COLUMNAS );
		
		CARGAR2 ( MAT , FILAS , COLUMNAS );
		printf("\n\n\n MAT[I][J] = I-J  \n");
		MIRAR ( MAT , FILAS , COLUMNAS );
		
		printf("\n\n\n\n\n");
		return 0 ;
}


void CARGAR1 ( int M[][COLUMNAS] , int F , int C )
{
		int I , J ;
		/*  CARGA DE LA MATRIZ I+J */
		for ( I = 0 ; I < F ; I++ )
				for ( J = 0 ; J < C ; J++ ) 
						M[I][J] = I + J ;
}


void CARGAR2 ( int M[][COLUMNAS] , int F , int C )
{
		int I , J ;
		/*  CARGA DE LA MATRIZ I-J */
		for ( I = 0 ; I < F ; I++ )
				for ( J = 0 ; J < C ; J++ ) 
						M[I][J] = I - J ;
}


void MIRAR ( int M[][COLUMNAS] , int F , int C )
{
		int I , J ;						
		/*  IMPRESION DE LA MATRIZ  */
		printf("\n\n\n        IMPRESION DE LA MATRIZ \n\n\n");
		for ( I = 0 ; I < F ; I++ ) {
				printf("\n\n\n\n\t");
				for ( J = 0 ; J < C ; J++ ) 
						printf("%8d" , M[I][J] );
		}
		getchar();
}
