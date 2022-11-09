/* STRINGS  */
/*  USO DE STRCMP()  */  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
		char STR1[20] , STR2[20]; 
				
		do {
				printf("\n\n\n INGRESE UNA FRASE  :   " );
				gets(STR1) ;
		
				if ( strcmp(STR1,"LOLA") < 0 )
					printf("\n\n %s ES MENOR QUE LOLA " , STR1 );
				if ( strcmp(STR1,"LOLA") > 0 )
					printf("\n\n %s ES MAYOR QUE LOLA " , STR1 );
				if ( ! strcmp(STR1,"LOLA") )
					printf("\n\n %s ES IGUAL A LOLA " , STR1 );
		
				
				printf("\n\n SEGUIMOS ?   " );
				gets(STR2);
		} while ( stricmp(STR2,"NO") );  // NOT CASE SENSITIVE
		
		
		printf("\n\n\n" );			
		printf("\n\n\n\n\n");
		return 0 ;
}


