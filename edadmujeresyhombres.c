//Imprima  la  cantidad  de  mujeres  mayores  de  edad  y  la  cantidad  de  hombres  mayores  de  edad  de  un  total  de  N  personas.  Muestre  también sus porcentajes
#include<stdio.h> // Librería estándar de entrada y salida

int main(){
    // Declaramos variables
    int CantidadePersonas, contador = 1, Edad, CantidadHombres = 0, CantidadMujeres = 0; 
    float promedioH, promedioM; // Variables para almacenar el promedio de hombres y mujeres mayores de 18 años
    char Genero; // Variable para almacenar el género ingresado

    // Solicitamos al usuario el número total de personas
    printf("Ingrese el numero de personas\n");
    scanf("%d", &CantidadePersonas);

    // Bucle "do-while" para iterar por cada persona ingresada
    do {
        contador++; // Incrementamos el contador de personas

        // Solicitamos el género de la persona
        printf("Ingrese el genero (M/F):\n");
        scanf(" %c", &Genero); // Nota: El espacio antes de %c evita problemas con saltos de línea anteriores

        // Solicitamos la edad de la persona
        printf("Ingrese la edad:\n");
        scanf("%d", &Edad);

        // Verificamos si la edad ingresada es mayor a 18 años
        if (Edad > 18) {
            // Usamos una sentencia "switch" para verificar el género
            switch (Genero) {
                case 'm': // Caso para hombres en minúscula
                case 'M': // Caso para hombres en mayúscula
                    CantidadHombres++; // Incrementamos el contador de hombres mayores de 18
                    break;

                case 'f': // Caso para mujeres en minúscula
                case 'F': // Caso para mujeres en mayúscula
                    CantidadMujeres++; // Incrementamos el contador de mujeres mayores de 18
                    break;

                default: 
                    // Si no es 'M', 'm', 'F' o 'f', no hacemos nada
                    break;
            }
        }

    } while (CantidadePersonas >= contador); // Repetimos hasta que se procesen todas las personas

    // Calculamos el porcentaje de hombres y mujeres mayores de 18 años
    promedioM = (CantidadMujeres / (float)CantidadePersonas) * 100;
    promedioH = (CantidadHombres / (float)CantidadePersonas) * 100;

    // Mostramos los resultados
    printf("La cantidad de hombres mayores a 18 años es: %d\n", CantidadHombres);
    printf("La cantidad de mujeres mayores a 18 años es: %d\n", CantidadMujeres);   
    printf("El porcentaje de hombres mayores a 18 años es: %.2f %%\n", promedioH);
    printf("El porcentaje de mujeres mayores a 18 años es: %.2f %%\n", promedioM);

    return 0; // Fin del programa
}
