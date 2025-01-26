#include<stdio.h>
int main(){
    int i,Edad,NumeroPersonas,CantidadMujeres=0,CantidadHombres=0;
    float PorcentajeHombre,PorcentajeMujeres;
    char Genero;
    printf("Ingrese el numero de personas\n");

    scanf("%d",&NumeroPersonas);
    for (i = 0; i < NumeroPersonas; i++)
    {

        printf("Ingrese el genero de la persona\n");
        scanf(" %c",&Genero);

        printf("Ingrese la edad\n");
        scanf("%d",&Edad);
        if(Edad >=18)
        {
            switch (Genero)
            {
            case 'F':
            case 'f':
            CantidadMujeres++;
                break;
            case 'M':
            case 'm':
            CantidadHombres++;
            default:
                break;
            }
        }
    }
    PorcentajeHombre=((float)CantidadHombres/NumeroPersonas)*100;
    PorcentajeMujeres=((float)CantidadMujeres/NumeroPersonas)*100;
    printf("La cantidad de mujeres mayores a 18 años es: %d\n",CantidadMujeres);
    printf("La cantidad de hombres mayores a 18 años es: %d\n",CantidadHombres);
    printf("El porcentaje de hombres mayores de edad es: %.2f %% \n",PorcentajeHombre);
    printf("El porcentaje de mujeres mayores de edad es: %.2f %%\n",PorcentajeMujeres);
}