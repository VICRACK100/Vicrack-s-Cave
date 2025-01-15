//En un depósito se reciben 10 barriles de lubricantes para una fábrica de rulemanes y se desea
// conocer el volumen total que ocuparán. Existen 4 tipos de barriles (de 25, 40, 50 y 100 
//litros) que se identifican con A, B, C y D, respectivamente.
#include<stdio.h>
#define A 25
#define B 40
#define C 50
#define D 100
int main (){
    int barriles,i,suma=0;
    char tipo;
    printf("Ingrese le numero de barriles a calcular\n");
    scanf("%d", &barriles);
    for (i = 0; i < barriles; i++)
    {
        printf("Ingrese el tipo de barril: A=25,B=40,C=50,D=100\n");
        scanf(" %c", &tipo);
        switch (tipo)
        {
        case 'A':
        case 'a':
            suma +=  A;
            break;
        case 'B':
        case 'b':
            suma +=  B;
            break;
        case 'C':
        case 'c':
            suma +=  C;
            break;
        case 'D':
        case 'd':
        suma +=  D;
        default: 
            printf("Ingrese un valor valido");
            break;
        }
    }
    printf("La suma total del volumen a ocupar es de %d\n", suma);
    return 0;
}
