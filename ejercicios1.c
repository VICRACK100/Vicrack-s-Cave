#include<stdio.h>
int main(){
    int numero,suma=0,contador=1,valor;
    printf("Cuantos numeros desea sumar, (maximo 50)\n");
    scanf("%d", &numero);
    if (numero>50 && numero<00){
        printf("Ingrese valores incorrectos");
    }
    do{
        printf("Ingrese su numero\n");
        scanf("%d", &valor);
        if (valor > 0){
            suma= suma+valor;
        }    
        contador++;
    
    }while (contador <= numero && valor>0);
    
            printf("El total de digitos sumados fueron %d\n",contador-1);
            printf("El total de la suma de los digitos es %d\n", suma);
    
}