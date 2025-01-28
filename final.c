#include <stdio.h>
int main() {
    // Declaración de variables
    float tiempohoras, tiempominutos, dineroH, dinerom, deuda, cambio, pago;
    int billetes100, billetes50, billetes20, billetes10, billetes5;
    int monedas25, monedas10, monedas5, monedas1, monedas50, monedas100;

    // Mensaje inicial con tarifas del parqueadero
    printf("Tarifas del parqueadero:\n1 Hora = 2.50$\nMenos de una hora = 1.25\n");

    // Solicitar el número de horas al usuario
    do {
        printf("\nIngrese el numero de horas:\n");
        scanf("%f", &tiempohoras);
        if (tiempohoras < 0) {
            printf("Ingrese valores mayores a 0\n");
        }    
    } while (tiempohoras < 0); // Validar que el tiempo sea positivo

    // Calcular el costo por horas
    dineroH = tiempohoras * 2.50;

    // Solicitar el número de minutos al usuario
    do {
        printf("Ingrese su numero de minutos\n");
        scanf("%f", &tiempominutos);
        if (tiempominutos < 0 || tiempominutos > 59) {
            printf("Ingrese valores entre 0-59 minutos:\n");
        }
    } while (tiempominutos < 0 || tiempominutos > 59); // Validar rango válido de minutos

    // Costo fijo adicional por minutos
    dinerom = 1.25;

    // Calcular deuda total
    deuda = dineroH + dinerom;
    printf("Su deuda a pagar es de $%.2f", deuda);

    // Solicitar el monto de pago hasta cubrir la deuda
    do {
        printf("\nIngrese su monto:\n");
        scanf("%f", &pago);
        if (pago < deuda) {
            deuda -= pago; // Reducir la deuda pendiente
            printf("Dinero insuficiente, faltan $%.2f", deuda);
        } else { 
            cambio = pago - deuda; // Calcular cambio
            deuda = 0; // Deuda cubierta
            printf("Su cambio es de $%.2f", cambio);
        }
    } while (deuda > 0);

    // Calcular el desglose del cambio
    cambio += 0.001; // Compensar errores de redondeo
    billetes100 = cambio / 100; cambio -= billetes100 * 100;
    billetes50 = cambio / 50; cambio -= billetes50 * 50;
    billetes20 = cambio / 20; cambio -= billetes20 * 20;
    billetes10 = cambio / 10; cambio -= billetes10 * 10;
    billetes5 = cambio / 5; cambio -= billetes5 * 5;

    monedas100 = cambio / 1.00; cambio -= monedas100 * 1.00;
    monedas50 = cambio / 0.50; cambio -= monedas50 * 0.50;
    monedas25 = cambio / 0.25; cambio -= monedas25 * 0.25;
    monedas10 = cambio / 0.10; cambio -= monedas10 * 0.10;
    monedas5 = cambio / 0.05; cambio -= monedas5 * 0.05;
    monedas1 = cambio / 0.01; cambio -= monedas1 * 0.01;

    // Mostrar el desglose del cambio en billetes y monedas
    printf("\nDesglose del cambio:\n");
    if (billetes100) printf("%d billetes de $100\n", billetes100);
    if (billetes50) printf("%d billetes de $50\n", billetes50);
    if (billetes20) printf("%d billetes de $20\n", billetes20);
    if (billetes10) printf("%d billetes de $10\n", billetes10);
    if (billetes5) printf("%d billetes de $5\n", billetes5);
    if (monedas100) printf("%d monedas de $1.00\n", monedas100);
    if (monedas50) printf("%d monedas de $0.50\n", monedas50);
    if (monedas25) printf("%d monedas de $0.25\n", monedas25);
    if (monedas10) printf("%d monedas de $0.10\n", monedas10);
    if (monedas5) printf("%d monedas de $0.05\n", monedas5);
    if (monedas1) printf("%d monedas de $0.01\n", monedas1);

    // Mensaje final al usuario
    printf("\nGracias por su visita\nTiene 15 minutos para salir del parking.");

    return 0;
}



