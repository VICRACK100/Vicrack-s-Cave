#include <stdio.h>

float calculo_horas(float);
float leernumero(char*);

float leernumero(char* mensaje) {
    float tiempo;
    printf("%s", mensaje);
    while (scanf("%f", &tiempo) != 1 || tiempo < 0) {
        printf("Error, ingrese un número positivo: ");
        while (getchar() != '\n');
    }
    return tiempo;
}

float calculo_horas(float tiempo) {
    float precio;
    if (tiempo > 3) {
        precio = 2.00 + (tiempo - 3) * 0.50;
    } else {
        precio = 2.00;
    }
    return precio;
}

int main() {
    int cantidad;
    printf("Ingrese la cantidad de carros: ");
    scanf("%d", &cantidad);

    float tiempos[cantidad];
    float precios[cantidad];

    for (int i = 0; i < cantidad; i++) {
        printf("\nCarro %d\n", i + 1);
        tiempos[i] = leernumero("  Ingrese horas de estacionamiento: ");
        precios[i] = calculo_horas(tiempos[i]);
    }

    // Imprimir la tabla
    printf("\n%-10s %-20s %-15s\n", "Carro", "Horas Estacionado", "Precio a Pagar");
    printf("----------------------------------------------------------\n");
    for (int i = 0; i < cantidad; i++) {
        printf("%-10d %-20.2f $%-14.2f\n", i + 1, tiempos[i], precios[i]);
    }

    return 0;
}
