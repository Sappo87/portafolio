/* TEMPORIZACION */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>

void FINAL();

int main()
{
		time_t T ;
		printf ("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
		
		T = time(0) + 40 ;
		
		do {
				printf("%02d\b\b" , T-time(0));			
		} while ( T-time(0)+1 );
		
		FINAL();
														
		printf("\n\n\n\n\n\n");
		return 0 ;
}






void FINAL()
{
        char S[] = "FIN ESTRUCTURAS II";
		int L ;
        int I , J ;
        
        L = strlen(S);
        
        for ( I = 0 ; I < L/2 ; I++ )
                printf("\b");
        for ( J = 0 ; J < 20 ; J++ ) {
        
                printf("%s", S);   
                Sleep(500);
    
                for ( I = 0 ; I < L ; I++ )
                        printf("\b");
                for ( I = 0 ; I < L ; I++ )
                        printf(" ");
                for ( I = 0 ; I < L ; I++ )
                        printf("\b");
                Sleep(500);
        }
}
