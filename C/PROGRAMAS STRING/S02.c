/* STRINGS  */  

#include <stdio.h>
#include <stdlib.h>

int main()
{
		char STR[20] ; 
				
		printf("\n\n\n SCANF     INGRESE UNA FRASE  :   " );
		scanf ("%s" , STR);
		
		printf("\n\n\n SCANF     FRASE INGRESADA   :   " );
		puts(STR);
		
		fflush(stdin);
		
		printf("\n\n\n GETS      INGRESE UNA FRASE  :   " );
		gets(STR) ;
		
		printf("\n\n\n GETS      FRASE INGRESADA   :   " );
		puts(STR);
		
		
		printf("\n\n\n\n\n");
		return 0 ;
}


