#include<stdio.h>
int main(){
    int CantidadePersonas,contador=1,Edad,CantidadHombres=0,CantidadMujeres=0;
    float promedioH,promedioM;
    char Genero;
    printf("Ingrese el numero de personas\n");
    scanf("%d",&CantidadePersonas);
    do
    {
        contador++;
        printf("Ingrese el genero\n");
        scanf(" %c",& Genero);

        printf("Ingrese la edad\n");
        scanf("%d",& Edad);

        if (Edad > 18)
        {
        
        
            switch (Genero)
            {
                case 'm':
                case 'M':
                CantidadHombres++;
                break;
                case 'f':
                case 'F':
                CantidadMujeres++;
            default:
                break;
            }
        }
        

    } while (CantidadePersonas >= contador);
    promedioM= (CantidadMujeres/CantidadePersonas)*100;
    promedioH= (CantidadHombres/CantidadePersonas)*100;
    printf("La cantidad de hombres mayores a 18 años es %d\n",CantidadHombres);
    printf("La cantidad de mujeres mayores a 18 años es %d\n",CantidadMujeres);   
    printf("El promedio de hombres mañores a 18 años es: %.2f %%\n",promedioH);
    printf("El promedio de mujeres mañores a 18 años es: %.2f %%\n",promedioM);
}

