/* PUNTEROS 05 */  
/* TRANSFERENCIA A FUNCIONES  */  

#include <stdio.h>
#include <stdlib.h>

#define N 5

void FUNCION ( int , int [] );

int main()
{
		int A = 25 ;
		int VEC[N] = { 12 , 4 , 7 , 10 , 23} ;
		int I ;
		
		printf ("\n\n\t\t  VALORES ORIGINALES \n\n\t\t" );
		printf(" %5d \t\t" , A );
		for ( I = 0 ; I < N ; I++ )
			printf ("%5d" , VEC[I] );
		
		FUNCION ( A , VEC );
		
		printf ("\n\n\t\t  VALORES DESPUES DE LA FUNCION \n\n\t\t" );
		printf(" %5d \t\t" , A );
		for ( I = 0 ; I < N ; I++ )
			printf ("%5d" , VEC[I] );
		
		
		printf("\n\n\n");
		return 0 ;
}

void FUNCION ( int A , int V[] )
{
		int I ;
		
		A = 2 * A ;
		for ( I = 0 ; I < N ; I++ )
			V[I] = 2 * V[I] ;
}
