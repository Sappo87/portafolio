/* VECTOR DE ESTRUCTURAS */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*  TIPO GLOBAL  */
struct ALUMNO {
		int LEG ;
		char SEX ;
		float PROM ;
} ;

#define  N  5

int main()
{
		struct ALUMNO VEC[N] ;
		int I ;
					
		printf("\n\n\n    CARGA DE LOS DATOS \n\n");
		for ( I = 0 ; I < N ; I++ ) {
			printf ("\n   LEGAJO    =    " );	
			scanf("%d" , &(VEC[I].LEG) );
			fflush(stdin);
			printf ("\n   SEXO      =    " );
			VEC[I].SEX = getchar();
			printf ("\n   PROMEDIO  =    " );
			scanf("%f" , &(VEC[I].PROM) ) ;
		}		
		
		printf("\n\n\n    IMPRESION DE LOS DATOS \n\n");
		printf ("\n\n\t %10s %10s %12s\n\n" ,"LEGAJO","SEXO","PROMEDIO" ) ;
		for ( I = 0 ; I < N ; I++ ) 
			printf ("\n\n\t %10d %10c %12.2f" , 
			VEC[I].LEG  , VEC[I].SEX , VEC[I].PROM ) ;
				
		
											
		printf("\n\n\n\n FIN DEL PROGRAMA\n\n");
		return 0 ;
}


