/* MANEJO DE TIEMPOS DEL SISTEMA */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main()
{
		time_t T1 , T2 ;
		
		T1 = time(0) ;
		
		system ("pause");
		getchar() ;
		
		T2 = time(0) ;
		
		printf("\n\n\n\t  TIEMPO TRANSCURRIDO : %d SEGUNDOS" , T2-T1);
																
		printf("\n\n\n\n FIN DEL PROGRAMA\n\n");
		return 0 ;
}


