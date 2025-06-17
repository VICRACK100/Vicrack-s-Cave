#include<stdio.h>
#include <stdlib.h>
#define DATA "datosEstudiantes.txt"
void IngresarDatos();


int main() {
    IngresarDatos();
    return 0;
}




void IngresarDatos(){
    // Crear puntero al archivo
    FILE *datos;
    // Abrir el archivo y asignar al puntero
    datos = fopen(DATA, "a");
    char nombre[15];
    float promedio;

    if (datos == NULL) {
        printf("No se pudo abrir el archivo.\n");
    return;
    } 
    
    
    for (int i = 0; i < 3; i++) {
        
        printf("Ingrese su nombre: \n");
        scanf("%s", nombre); // Usar %s para leer cadenas
        fprintf(datos, "Nombre: %s\n", nombre);

        printf("Ingrese su promedio: \n");
        scanf("%f", &promedio); // Usar & para variables escalares
        fprintf(datos, "Promedio: %.2f\n", promedio); // Usar %.2f para formato flotante
    }

    fclose(datos);
}
