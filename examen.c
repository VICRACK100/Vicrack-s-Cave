//Imprima  la  cantidad  de  mujeres  mayores  de  edad  y  la  cantidad  de  hombres  mayores  de
//edad  de  un  total  de  N  personas.  Muestre  también sus porcentajes
#include <stdio.h> //Biblioteca de entrada y salida de datos
int main (){
    int numero,sumahombres=0,sumamujeres=0,i,edad,g=1;
    char Genero;
    float porcentajehombre,porcentajemujer;
    printf("Ingrese el numero de personas a calcular\n");
    scanf("%d", &numero);
    for ( i = 0; i < numero; i++)
    {
        printf("Ingrese la edad de la persona %d\n",g++);
        scanf("%d", &edad);
        printf("Escribe el genero Masculino con M o m\n");
        printf("Escribe el genero Femenino con F o f\n");
        scanf(" %c", &Genero);
        if (edad>=18)
        {
            switch (Genero)
            {

                case 'm':
                case 'M':
                    sumahombres++;
                    break;
                case 'F':
                case 'f':    
                    sumamujeres++;
                default:
                    break;
            }
                

        }
    }
    porcentajehombre=((float)sumahombres/numero)*100;
    porcentajemujer=((float)sumamujeres/numero)*100;
    printf("La cantidad de hombres mayores de edad es %d\n", sumahombres);
    printf("La cantidad de mujeres mayores de edad es %d\n", sumamujeres);
    printf("El porcentaje de hombres mayores de edad es: %2.f %%\n", porcentajehombre);
    printf("El porcentaje de mujeres mayores de edad es: %2.f %%\n", porcentajemujer);
}