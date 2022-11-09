/* VECTOR DE PUNTEROS A ESTRUCTURA */  
/* MANEJO DE VECTOR DE ESTRUCTURAS MEDIANTE VECTOR DE PUNTEROS */

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
		struct ALUMNO * VP[N] , * PAUX ;
		int I , J ;
		
		
		/*  INICIALIZACION DEL VECTOR DE PUNTEROS  */
		for ( I = 0 ; I < N ; I++ )
//				VP[I]   = &VEC[I] ;
				*(VP+I) = VEC+I ;		
				
		for ( P = VEC ; P < VEC+N ; P++ ) {
				fflush(stdin);
				printf("\n\n\t\t  NOMBRE  :  ");
				gets( P->NOM );
				printf("\n\t\t  SEXO    :  ");
				P->SEX = getchar();
				printf("\n\t\t  NOTA    :  ");
				scanf("%d" , &(P->NOTA) ) ;			
		}
		
		printf("\n\n\n\n\t\t BARRIENDO VECTOR DE ESTRUCTURAS\n");
		printf("\n\t %-15s %8s %10s\n","NOMBRE","SEXO","NOTA") ;	
		for ( P = VEC ; P < VEC+N ; P++ ) 
				printf("\n\n\t %-15s %8c %10d" , 
				P->NOM , P->SEX , P->NOTA ) ;			
		getchar(); getchar();
		
		printf("\n\n\n\n\t\t BARRIENDO CON VECTOR DE PUNTEROS\n");
		printf("\n\t %-15s %8s %10s\n","NOMBRE","SEXO","NOTA") ;	
		for ( I = 0 ; I < N ; I++ ) 
				printf("\n\n\t %-15s %8c %10d" , 
				(*(VP+I))->NOM , (*(VP+I))->SEX , (*(VP+I))->NOTA ) ;	
		getchar();
		
		for ( I = 0 ; I < N-1 ; I++ )
				for ( J = 0 ; J < N-I-1 ; J++ )
						if ( (*(VP+J))->NOTA  < (*(VP+J+1))->NOTA ) {
							PAUX = *(VP+J) ;
							*(VP+J) = *(VP+J+1) ;
							*(VP+J+1) = PAUX ;
						}


		printf("\n\n\n\n\t\t BARRIENDO CON VECTOR DE PUNTEROS\n");
		printf("\n\t %-15s %8s %10s\n","NOMBRE","SEXO","NOTA") ;	
		for ( I = 0 ; I < N ; I++ ) 
				printf("\n\n\t %-15s %8c %10d" , 
				(*(VP+I))->NOM , (*(VP+I))->SEX , (*(VP+I))->NOTA ) ;	
		getchar();
		
		
		printf("\n\n\n\n\t\t BARRIENDO VECTOR DE ESTRUCTURAS\n");		
		printf("\n\t %-15s %8s %10s\n","NOMBRE","SEXO","NOTA") ;	
		for ( P = VEC , I = 0 ; I < N ; I++ ) 
				printf("\n\n\t %-15s %8c %10d" , 
				(P+I)->NOM , (*(P+I)).SEX , (P+I)->NOTA ) ;			
				
		return 0 ;
}







