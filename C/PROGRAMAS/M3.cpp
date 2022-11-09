/* MATRICES  */ 
/* TRANSFERENCIA DE MATRICES A FUNCION  */ 

#include <stdio.h>
#include <stdlib.h>

#define FILAS    3
#define COLUMNAS 4

void CARGAR ( int [][COLUMNAS] , int , int );
void MIRAR ( int [][COLUMNAS] , int , int );

int main()
{
		int MAT[FILAS][COLUMNAS] ;
		
		CARGAR ( MAT , FILAS , COLUMNAS );
		MIRAR ( MAT , FILAS , COLUMNAS );
		
		printf("\n\n\n\n\n");
		return 0 ;
}


void CARGAR ( int M[][COLUMNAS] , int F , int C )
{
		int I , J ;
		/*  CARGA DE LA MATRIZ  */
		for ( I = 0 ; I < F ; I++ )
				for ( J = 0 ; J < C ; J++ ) {
						printf("\n\t\t M[%d][%d] = " , I , J );
						scanf("%d" , &M[I][J] );
				}
}


void MIRAR ( int M[][COLUMNAS] , int F , int C )
{
		int I , J ;						
		/*  IMPRESION DE LA MATRIZ  */
		printf("\n\n\n        IMPRESION DE LA MATRIZ \n\n\n");
		for ( I = 0 ; I < F ; I++ ) {
				printf("\n\n\t\t");
				for ( J = 0 ; J < C ; J++ ) 
						printf("%8d" , M[I][J] );
		}
}
