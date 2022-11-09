/* STRINGS  */  

#include <stdio.h>
#include <stdlib.h>

int main()
{
		char STR[] = "PENELOPE" ;
		
		printf("\n\n\n LONGITUD DEL VECTOR STR = %d" , sizeof(STR) );
		
		printf("\n\n\n UTILIZACION DE PRINTF \n\n");
		printf("%s" , STR);
		printf("%s" , STR);
		printf("%s" , STR);
		
		printf("\n\n\n UTILIZACION DE PUTS \n\n");
		puts(STR);
		puts(STR);
		puts(STR);
		
		printf("\n\n\n\n\n");
		return 0 ;
}


