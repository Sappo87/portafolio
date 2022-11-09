/* ESTRUCTURAS QUE CONTIENEN VECTORES */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define  NUM  16
#define  NN   6

/*  TIPO GLOBAL  */
struct ALUMNO {
		char NOM[20] ;
		char SEX ;
		int NOTA[NN] ;
} ;



void CARGAR ( struct ALUMNO [] , int );
void MIRAR ( struct ALUMNO [] , int );
void ORDENAR ( struct ALUMNO [] , int , int );

int main()
{
		struct ALUMNO VEC[NUM] ;
		
		CARGAR ( VEC , NUM ) ;
		MIRAR ( VEC , NUM ) ;
		
		ORDENAR ( VEC , NUM , 3 ) ;
		MIRAR ( VEC , NUM ) ;
																
		printf("\n\n\n\n FIN DEL PROGRAMA\n\n");
		return 0 ;
}


void CARGAR ( struct ALUMNO V[] , int N )
{
		int I , J ;
		char NOM[][20] = {"FELIPE","ANA","LAURA","CAROLINA",
						  "PEPE","LOLA","PACO","ANIBAL",
						  "LORENA","CARLOS","LUCRECIA","ANASTASIA",
						  "MANUEL","ROBERTO","EDUARDO","ELENA"};
		char SEX[] = {'M','F','F','F','M','F','M','M',
					  'F','M','F','F','M','M','M','F'};
					  			
		for ( I = 0 ; I < N ; I++ ) {
			strcpy ( V[I].NOM , NOM[I] ) ;
			V[I].SEX = SEX[I] ;
			for ( J = 0 ; J < NN ; J++ )
					V[I].NOTA[J] = 2 + rand()%9  ;
		}		
}

void MIRAR ( struct ALUMNO V[] , int N )
{
		int I , J ;
		printf("\n\n\n    IMPRESION DE LOS DATOS \n\n");
		printf ("\n\n\t\t %-15s %10s \t %16s\n\n" ,"NOMBRE","SEXO","NOTAS" ) ;
		for ( I = 0 ; I < N ; I++ ) {
			printf ("\n\n\t\t %-15s %10c \t " , 
			V[I].NOM  , V[I].SEX ) ;
			for ( J = 0 ; J < NN ; J++ )
				printf("%4d" , V[I].NOTA[J]);
		}
		getchar();
}


void ORDENAR ( struct ALUMNO V[] , int N , int CODIGO )
{
		int I , J ;
		struct ALUMNO AUX ;

		for ( I = 0 ; I < N-1 ; I++ )
				for ( J = 0 ; J < N-I-1 ; J++ )
						if ( V[J].NOTA[CODIGO] < V[J+1].NOTA[CODIGO] ) {
								/*  SWAPPING  */
								AUX    = V[J] ;
								V[J]   = V[J+1] ;
								V[J+1] = AUX ;							
						}
}
