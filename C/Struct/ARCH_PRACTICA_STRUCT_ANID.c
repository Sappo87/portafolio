#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1

typedef struct MATERIA
{
    char NOMBRE[20];
    int CALIFICACIONES[5];
    float PROMEDIO;
}MATERIA;

typedef struct ALUMNO
{
    char NOMBRE_ALU[20];
    MATERIA MAT[2];
}ALUMNO;

int main()
{
    FILE *FP;
    ALUMNO ALU;
    int i, j, k, pro = 0;


    if((FP = fopen("BD", "wb")) == NULL)
    {
        printf("\nError apertura de archivo escritura!");
        exit(1);
    }

    for(i = 0; i<= N; i++)
    {
        fflush(stdin);
        printf("\nIngrese nombre de alumno:  ");
        gets(ALU.NOMBRE_ALU);
        for(j = 0; j<=2; j++)
        {
           printf("\nIngrese nombre de materia: ");
           fflush(stdin);
           gets(ALU.MAT[j].NOMBRE);
           printf("\nIngrese calificaciones : ");
           for(k = 0; k<= 5; k++)
           {
              scanf("%d", &ALU.MAT[j].CALIFICACIONES[k]);
           }
           ALU.MAT[j].PROMEDIO = pro;
        }
    fwrite(&ALU, sizeof(ALU), 1, FP);
    }

    fclose(FP);
    return 0;

}

