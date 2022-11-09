/* PUNTEROS A ESTRUCTURA */  
/* MANEJO DE VECTOR DE ESTRUCTURAS MEDIANTE PUNTEROS */

#include <stdio.h>
#include <stdlib.h>

struct ALUMNO {
	char NOM[20] ;
	char SEX ;
	int NOTA ;
};

#define N 8

int main()
{
		struct ALUMNO VEC[N] , *P ;
		struct ALUMNO AUX ;
		int I , J ;
		
		for ( P = VEC ; P < VEC+N ; P++ ) {
				fflush(stdin);
				printf("\n\n\t\t  NOMBRE  :  ");
				gets( P->NOM );
				printf("\n\t\t  SEXO    :  ");
				P->SEX = getchar();
				printf("\n\t\t  NOTA    :  ");
				scanf("%d" , &(P->NOTA) ) ;			
		}
		
		printf("\n\n\n\n\t %-15s %8s %10s\n","NOMBRE","SEXO","NOTA") ;	
		for ( P = VEC ; P < VEC+N ; P++ ) 
				printf("\n\n\t %-15s %8c %10d" , 
				P->NOM , P->SEX , P->NOTA ) ;			
		getchar(); getchar();
		
		P = VEC ;
		for ( I = 0 ; I < N-1 ; I++ )
				for ( J = 0 ; J < N-I-1 ; J++ )
						if ( (P+J)->NOTA < (P+J+1)->NOTA ) {
							AUX = *(P+J) ;
							*(P+J) = *(P+J+1) ;
							*(P+J+1) = AUX ;
						}
				
		printf("\n\n\n\n\t %-15s %8s %10s\n","NOMBRE","SEXO","NOTA") ;	
		for ( P = VEC , I = 0 ; I < N ; I++ ) 
				printf("\n\n\t %-15s %8c %10d" , 
				(P+I)->NOM , (*(P+I)).SEX , (P+I)->NOTA ) ;			
				
		return 0 ;
}







