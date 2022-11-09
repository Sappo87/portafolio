/* ESTRUCTURAS ANIDADAS */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define  NUM  16
#define  NN   6

struct FECHA {
		int DIA ;
		int MES ;
		int ANIO ;	
};

struct ALUMNO {
		char NOM[20] ;
		char SEX ;
		struct FECHA NAC ;
} ;

void CARGAR ( struct ALUMNO [] , int );
void MIRAR ( struct ALUMNO [] , int );

int main()
{
		struct ALUMNO VEC[NUM] ;
		
		CARGAR ( VEC , NUM ) ;
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
			V[I].NAC.DIA = 1 + rand()%29  ;
			V[I].NAC.MES = 1 + rand()%12  ;
			V[I].NAC.ANIO = 1980 + rand()%20  ;
		}		
}

void MIRAR ( struct ALUMNO V[] , int N )
{
		int I , J ;
		printf("\n\n\n    IMPRESION DE LOS DATOS \n\n");
		printf ("\n\n\t\t %-15s %10s \t   %s\n\n" ,
		"NOMBRE","SEXO","NACIMIENTO" ) ;
		for ( I = 0 ; I < N ; I++ ) {
			printf ("\n\n\t\t %-15s %10c \t %02d : %02d : %d" , 
			V[I].NOM  , V[I].SEX , V[I].NAC.DIA , V[I].NAC.MES ,
			V[I].NAC.ANIO) ;
			
		}
		getchar();
}



