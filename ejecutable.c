#include <stdio.h>  // Librería estándar para entrada y salida
#include <string.h> // Librería para manipulación de cadenas
#include "funciones.h" // Archivo de cabecera donde están las funciones recursivas

// Función principal del programa
int main() {
    int opcion; // Variable para almacenar la opción seleccionada por el usuario

    do {
        printf("\n=== Menú Interactivo ===\n");
        printf("1. Invertir una cadena\n"); // Opción para invertir una cadena
        printf("2. Calcular el factorial de un número\n"); // Opción para calcular el factorial
        printf("3. Generar sucesión de Fibonacci\n"); // Opción para generar Fibonacci
        printf("4. Salir\n"); // Opción para salir del programa
        printf("Seleccione una opción: "); // Solicita al usuario que elija una opción
        scanf("%d", &opcion); // Lee la opción seleccionada

        // Evaluamos la opción ingresada con un switch
        switch (opcion) {
            case 1: { // Invertir una cadena
                char cadena[100]; // Espacio para almacenar la cadena ingresada por el usuario
                printf("Ingrese una cadena: ");
                scanf("%s", cadena); // Lee la cadena del usuario
                int longitud = strlen(cadena); // Calcula la longitud de la cadena
                invertirCadena(cadena, 0, longitud - 1); // Llama a la función recursiva para invertir la cadena
                printf("Cadena invertida: %s\n", cadena); // Imprime la cadena invertida
                break;
            }
            case 2: { // Calcular el factorial
                int numero; // Variable para almacenar el número ingresado por el usuario
                printf("Ingrese un número entero positivo: ");
                scanf("%d", &numero); // Lee el número del usuario
                if (numero < 0) { // Verifica que el número sea positivo
                    printf("El número debe ser positivo.\n"); // Mensaje de error si es negativo
                } else {
                    // Llama a la función recursiva para calcular el factorial y muestra el resultado
                    printf("El factorial de %d es: %llu\n", numero, factorial(numero));
                }
                break;
            }
            case 3: { // Generar sucesión de Fibonacci
                int limite; // Variable para almacenar el límite ingresado por el usuario
                printf("Ingrese el límite para la sucesión de Fibonacci: ");
                scanf("%d", &limite); // Lee el límite del usuario
                printf("Sucesión de Fibonacci hasta %d: ", limite);
                fibonacciRecursivo(limite, 0, 1); // Llama a la función recursiva para generar Fibonacci
                printf("\n"); // Salto de línea después de imprimir la sucesión
                break;
            }
            case 4: // Salir del programa
                printf("Saliendo del programa...\n"); // Mensaje de despedida
                break;
            default: // Caso para opciones no válidas
                printf("Opción no válida. Intente de nuevo.\n"); // Mensaje de error
        }

        printf("\n"); // Salto de línea para separar iteraciones
    } while (opcion != 4); // El programa se repite hasta que el usuario elija salir

    return 0; // Retorna 0 indicando que el programa terminó correctamente
}