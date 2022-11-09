/* ESTRUCTURAS */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
		struct {
				short int NUM ;
				char CAR ;
				float F ;
		} X , Y ;
					
		X.NUM = 234 ;
		X.CAR = 'H' ;
		X.F   = 7.9845 ;
		
		printf ("\n\n\t TAMAÑO DE X  =  %d\n\n" , sizeof(X)) ;			
		
		printf ("\n\n   X.NUM = %d   X.CAR = %c   X.F = %f " , 
		X.NUM , X.CAR , X.F);			
		printf ("\n\n   Y.NUM = %d   Y.CAR = %c   Y.F = %f " , 
		Y.NUM , Y.CAR , Y.F);				
		
	//	Y.NUM = X.NUM ;
	//	Y.CAR = X.CAR ;
	//	Y.F = X.F ;
	
		Y = X ;      //  COPIA DIRECTA DE ESTRUCTURAS			
					
		printf ("\n\n\n\n   X.NUM = %d   X.CAR = %c   X.F = %f " , 
		X.NUM , X.CAR , X.F);			
		printf ("\n\n   Y.NUM = %d   Y.CAR = %c   Y.F = %f " , 
		Y.NUM , Y.CAR , Y.F);			
								
		printf("\n\n\n\n FIN DEL PROGRAMA\n\n");
		return 0 ;
}



