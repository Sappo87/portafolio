/* MANEJO DE TIEMPOS DEL SISTEMA */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main()
{
		time_t T ;
		struct tm AHORA , *P ;
		
		T = time(0) ;
		
		system ("cls");
		
		P = localtime(&T) ;
		AHORA = *P ;
		
		printf ("\n\n\n\n\n\n\n\n\n\n\t\t\t\t");
		printf("%02d : %02d : %d" , 
		AHORA.tm_mday , 1+AHORA.tm_mon , 1900 + AHORA.tm_year );
		
		printf ("\n\n\n\n\t\t\t\t");
		printf("%02d : %02d : %02d" , 
		AHORA.tm_hour , AHORA.tm_min , AHORA.tm_sec );
																		
		printf("\n\n\n\n FIN DEL PROGRAMA\n\n");
		return 0 ;
}


