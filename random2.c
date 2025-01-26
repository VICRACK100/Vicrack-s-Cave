#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num,random,contador,repetir;
    contador=1;

    do
    {
        printf("¿Quieres jugar?\n");
        printf("Si (1) No (2)\n");
        scanf("%d",&repetir);
        if (repetir == 1)
        {
         do
         {
            //calcular numero random
            srand(time(NULL));
            random=rand()%10;
            contador = 0;  
            printf("\nIngresa un numero del 1 al 10\n");
            scanf("\n%d",&num);

            if (num == random)
            //ganaste
            {
                printf("Ganaste");
                printf("¿Quieres jugar?\n");
                printf("Si (1) No (2)\n");
                scanf("%d",&repetir);
            }
            else
            //perdiste
            {
                printf("\nFallaste intentalo otra vez\n");
                contador++;
            }
         } while (contador !=3);
            printf("\nFallaste 3 veces\n");
            printf("El numero era %d",random);
            printf("\nGame over");  
    
        }

} while (repetir!=0);
}