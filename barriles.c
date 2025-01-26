//En un depósito se reciben 10 barriles de lubricantes para una fábrica de rulemanes y se desea conocer el volumen total que ocuparán. 
//Existen 4 tipos de barriles (de 25, 40, 50 y 100 litros) que se identifican con A, B, C y D, respectivamente.

#include <stdio.h> // Librería estándar de entrada y salida de datos

// Definimos 4 constantes para los tipos de barriles y sus respectivos volúmenes
#define A 25
#define B 40
#define C 50
#define D 100

int main() {
    // Declaramos variables:
    // 'num' para el número de barriles a calcular
    // 'suma' para acumular el volumen total (inicializada en 0)
    // 'tipo' para almacenar el tipo de barril ingresado por el usuario
    int i, num, suma = 0;
    char tipo;

    // Solicitamos al usuario el número de barriles a procesar
    printf("¿Cuántos barriles deseas calcular?\n");
    scanf("%d", &num);

    // Bucle 'for' que itera tantas veces como el número de barriles especificado
    for (i = 0; i < num; i++) {
        // Solicitamos al usuario el tipo de barril
        printf("¿Qué tipo de barril desea calcular? (A, B, C, D)\n");
        scanf(" %c", &tipo); // Espacio antes de %c para evitar problemas con saltos de línea

        // Sentencia 'switch' para determinar el volumen según el tipo de barril
        switch (tipo) {
            case 'A': // Caso para barril tipo A (mayúscula)
            case 'a': // Caso para barril tipo A (minúscula)
                suma += A; // Suma el volumen correspondiente
                break;

            case 'B': // Caso para barril tipo B (mayúscula)
            case 'b': // Caso para barril tipo B (minúscula)
                suma += B;
                break;

            case 'C': // Caso para barril tipo C (mayúscula)
            case 'c': // Caso para barril tipo C (minúscula)
                suma += C;
                break;

            case 'D': // Caso para barril tipo D (mayúscula)
            case 'd': // Caso para barril tipo D (minúscula)
                suma += D;
                break;

            default: // Caso por defecto si el usuario ingresa un valor no válido
                printf("Tipo de barril inválido. Inténtalo de nuevo.\n");
                break;
        }
    }

    // Mostramos el resultado final del volumen total acumulado
    printf("El volumen total es %d\n", suma);

    return 0; // Fin del programa
}
