#include <stdio.h>
int main(){
    float tiempo,dinero,deuda,cambio;
    printf("Ingrese sus horas de parqueo, use : para fracciones\n");
    printf("1 Hora = 2.50 $\n");
    printf("30 Min = 1.25$\n");
    scanf("%f",&tiempo);

    deuda= (tiempo*2.50);
    printf("Total a pagar %.2f $\n", deuda);
    printf("\nIngrese su dinero \n");
    scanf("%f",&dinero);
    if (dinero<0){
        printf("Ingrese un monto valido \n");

        }else if (dinero<deuda){
            printf("Monto insuficiente, ingrese mas dinero \n");
        }else
        cambio=dinero-deuda;
        printf("Su cambio es de %.2f $", cambio );
        return 0;
}