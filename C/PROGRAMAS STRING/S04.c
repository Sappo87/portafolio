/* STRINGS  */
/*  USO DE STRCPY()  */  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
		char STR1[20] , STR2[20]; 
				
		printf("\n\n\n INGRESE UNA FRASE  :   " );
		gets(STR1) ;
		
		printf("\n\n STR1 = %s " , STR1 );
		printf("\n\n STR2 = %s " , STR2 );
		printf("\n\n\n" );
				
		strcpy (STR2,"CONSTANTINOPLA");	
		
		printf("\n\n STR1 = %s " , STR1 );
		printf("\n\n STR2 = %s " , STR2 );
		printf("\n\n\n" );		
				
		strcpy (STR1,STR2);	
		
		printf("\n\n STR1 = %s " , STR1 );
		printf("\n\n STR2 = %s " , STR2 );
		printf("\n\n\n" );			
		printf("\n\n\n\n\n");
		return 0 ;
}


