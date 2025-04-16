#define NOTAS 3
#define ALUMNOS 5 
#include <stdio.h>
int main(){
int i, j, notas[ALUMNOS][NOTAS];
float promedio[ALUMNOS], suma[ALUMNOS];
// Inicializar el arreglo de promedios y sumas a 0
for ( i = 0; i < ALUMNOS; i++)
{
    suma[i] = 0;
    promedio[i] = 0;
}

for ( i = 0; i < ALUMNOS; i++)
{
    printf("INGRESE LA NOTA DEL ALUMNO %d \n", i+1);
    for ( j = 0; j < NOTAS; j++)
    {
        printf("INGRESE LA NOTA %d: ", j+1);
        scanf("%d", &notas[i][j]);
        // Validar que la nota esté entre 0 y 10
        while (notas[i][j] < 0 || notas[i][j] > 10)
        {
            printf("ERROR, INGRESE UNA NOTA VALIDA (0-10): ");
            scanf("%d", &notas[i][j]);
        }
        // Sumar las notas del alumno   
        suma[i] += notas[i][j]; 
        promedio[i]= suma[i]/NOTAS; // Calcular el promedio

    }
    
}
printf("\n\n");
printf("ALUMNO\tNOTA 1\tNOTA 2\tNOTA 3\tPROMEDIO\n");
for ( i = 0; i < ALUMNOS; i++)
{
    printf("%d\t", i+1);
    for ( j = 0; j < NOTAS; j++)
    {
        printf("%d\t", notas[i][j]);
    }
    printf("%.2f\n", promedio[i]);
}
}
