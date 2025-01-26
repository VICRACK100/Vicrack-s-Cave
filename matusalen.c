#include <stdio.h>//Libreria de entrada y salida de datos

int main() {

    // Declaramos variables enteras: edad de Matusalén, número ingresado y contador de intentos
    int edadMatusalen = 969,  numero, contador=0;

    //Definimos variable de tipo caracter para escribir si desea continuar o no el juego al final

    char repetir;   
    //Utilizamos un bucle do para repetir el programa mediante escribir 's','S'         
    do {

        //Reiniciamos el contador de intentos al inicio de cada juego
        contador = 0;

        //Imprimimos en la pantalla el siguente mensaje
        printf("Adivina la edad de Matusalen:\n");

        //Se utiliza un bucle while para repetir la misma actividad de pedir ingresar el numero hasta que se completen los 3 intentos
        while (contador < 3) {
            printf("Intento %d: Ingrese su numero: ", contador++); //Mostramos el numeor de intentos
            scanf("%d", &numero);//Leemos el numero ingresado por el usuario

            //Comprobamos si el numero ingresado es igual a la edad de Matusalen, imprima en pantalla
            //!Ganaste¡
            if (numero == edadMatusalen) {
                printf("¡Ganaste! Adivinaste correctamente.\n");
                break; // Terminar el ciclo si acierta

                //Utilizamos sentencia else if para mostrar si el numero es mayor o menor que la edad de Matusalen
            } else if (numero < edadMatusalen) {
                printf("La edad es menor\n");
            } else  {
                printf("La edad es mayor.\n");
            }
            //Terminados todos estos procesos, se suma +1 al contador hasta llegar a 3 y pararlo
            contador++;
        }
        //Con sentencia if imprimimos perdiste, despues de los 3 intentos
        if (numero != edadMatusalen) {
            printf("Perdiste.\n");
        }
        printf("¿Deseas intentarlo nuevamente? (s/n): ");//Preguntamos si el jugador desea repetir el juego
        scanf(" %c", &repetir);
        //Utilizamos bucle do while para volver a jugar el programa mediante la seleccion de variables tipo char
        // definidas en el caracter "repetir"
    } while (repetir == 's' || repetir == 'S');
    //Mensaje de terminar el juego
    printf("Gracias por jugar.\n");
 return 0; //Finalizamos el programa
}
