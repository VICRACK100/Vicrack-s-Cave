#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    int opcion;

    do {
        printf("\n--- Menú interactivo ---\n");
        printf("1. Invertir una cadena\n");
        printf("2. Calcular el factorial de un número\n");
        printf("3. Generar la sucesión de Fibonacci\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: {
                char cadena[100];
                printf("Ingrese una cadena: ");
                scanf(" %[^\n]", cadena);
                int longitud = strlen(cadena);
                invertirCadena(cadena, 0, longitud - 1);
                printf("Cadena invertida: %s\n", cadena);
                break;
            }
            case 2: {
                int numero;
                printf("Ingrese un número entero positivo: ");
                scanf("%d", &numero);
                if (numero < 0) {
                    printf("El número debe ser positivo.\n");
                } else {
                    int resultado = calcularFactorial(numero);
                    printf("El factorial de %d es: %d\n", numero, resultado);
                }
                break;
            }
            case 3: {
                int n;
                printf("Ingrese la cantidad de términos de la sucesión de Fibonacci: ");
                scanf("%d", &n);
                if (n <= 0) {
                    printf("El número debe ser mayor que cero.\n");
                } else {
                    printf("Sucesión de Fibonacci: ");
                    generarFibonacci(n, 0, 1, 1);
                    printf("\n");
                }
                break;
            }
            case 4:
                printf("Saliendo del programa. ¡Hasta luego!\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 4);

    return 0;
}
