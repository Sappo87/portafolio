/* PUNTEROS 08 */  
/* PUNTEROS Y VECTORES   */  
/* DETERMINACION DEL VALOR MINIMO Y SU POSICION */  

#include <stdio.h>
#include <stdlib.h>

#define N 8

int main()
{
		int VEC[N] ;
		int *P , *PMIN ;
		
		/* CARGA DEL VECTOR   */
		for ( P = VEC ; P < VEC+N ; P++ ) {
			printf ("\n  DATO = " );
			scanf("%d" , P ) ;
		}
		
		/* IMPRESION    */
		printf("\n\n\n\t\t IMPRESION DEL VECTOR\n\n\t");		
		for ( P = VEC ; P < VEC+N ; P++ ) 
			printf ("%8d" , *P ) ;
		
		/* BUSQUEDA DEL MINIMO    */
		for ( PMIN = P = VEC ; P < VEC+N ; P++ ) 
				if ( *P < *PMIN ) 
						PMIN = P ;
						
		printf("\n\n\n  EL VALOR MINIMO ES %d" , *PMIN );
		printf("\n\n  Y SU POSICION ES %d" , PMIN-VEC );
		
		printf("\n\n\n");
		return 0 ;
}


