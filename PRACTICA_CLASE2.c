#include <stdio.h>
#define MAX 20

float calculo_horas(int horas, int minutos);
int leer_entero(char* mensaje);

int leer_entero(char* mensaje) {
    int valor;
    printf("%s", mensaje);
    while (scanf("%d", &valor) != 1 || valor < 0) {
        printf("Error, ingrese un número positivo: ");
        while (getchar() != '\n');
    }
    return valor;
}

float calculo_horas(int horas, int minutos) {
    float precio = 2.00;

    if (horas > 3) {
        precio += (horas - 3) * 0.50;
    }

    if (minutos > 0) {
        precio += 0.50;
    }

    return precio;
}

int main() {
    int cantidad;
    printf("Ingrese la cantidad de carros: ");
    scanf("%d", &cantidad);

    if (cantidad <= 0 || cantidad > MAX) {
        printf("Cantidad inválida. Debe estar entre 1 y %d.\n", MAX);
        return 1;
    }

    int horas[cantidad], minutos[cantidad];
    float precios[cantidad];

    for (int i = 0; i < cantidad; i++) {
        printf("\nCarro %d\n", i + 1);
        horas[i] = leer_entero("  Ingrese horas completas: ");
        minutos[i] = leer_entero("  Ingrese minutos adicionales: ");
        precios[i] = calculo_horas(horas[i], minutos[i]);
    }

    // Imprimir la tabla
    printf("\n%-10s %-20s %-15s\n", "Carro", "Tiempo Estacionado", "Precio a Pagar");
    printf("----------------------------------------------------------\n");
    for (int i = 0; i < cantidad; i++) {
        printf("%-10d %-2dh %2dmin %-10s $%-14.2f\n", i + 1, horas[i], minutos[i], "", precios[i]);
    }

    return 0;
}
