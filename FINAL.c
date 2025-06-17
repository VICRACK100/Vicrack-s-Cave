#include <stdio.h>
#include <string.h>
#define MAX 3

struct Estudiante {
    int codigo;
    char nombre[15];
    float notas[3];
    float promedio; 
};

struct Estudiante estudiantes[MAX];
int cantidadEstudiantes = 0;

void ingresarDatos();
void imprimir();
void buscarEstudiante();
void borrarEstudiante();
void menu();
int codigounico(int codigo, int actual);

int main() {
    menu();
    return 0;
}

void ingresarDatos() {
    if (cantidadEstudiantes >= MAX) {
        printf("No se pueden agregar mas estudiantes.\n");
        return;
    }
    for (int i = cantidadEstudiantes; i < MAX; i++) {
        int codigoTemportal;
        // Validar código único y positivo
        do {
            printf("Ingrese el codigo del estudiante %d: ", i + 1);
            while (scanf("%d", &codigoTemportal) != 1 || codigoTemportal <= 0) {
                printf("Codigo invalido. Ingrese un codigo numerico positivo: ");
                while (getchar() != '\n');
            }
            if (!codigounico(codigoTemportal, i)) {
                printf("El codigo ya existe. Ingrese un codigo unico.\n");
            } else {
                estudiantes[i].codigo = codigoTemportal;
                break;
            }
        } while (1);

        // Leer nombre (puede contener cualquier caracter)
        printf("Ingrese el nombre del estudiante %d: ", i + 1);
        while (getchar() != '\n'); // Limpiar buffer antes de fgets
        fgets(estudiantes[i].nombre, 15, stdin);
        estudiantes[i].nombre[strcspn(estudiantes[i].nombre, "\n")] = '\0';

        // Validar notas entre 0 y 10
        for (int j = 0; j < 3; j++) {
            float notaTemp;
            do {
                printf("Ingrese la nota %d del estudiante %d (0-10): ", j + 1, i + 1);
                while (scanf("%f", &notaTemp) != 1) {
                    printf("Entrada invalida. Ingrese una nota numerica: ");
                    while (getchar() != '\n');
                }
                if (notaTemp < 0.0 || notaTemp > 10.0) {
                    printf("Nota fuera de rango. ");
                }
            } while (notaTemp < 0.0 || notaTemp > 10.0);
            estudiantes[i].notas[j] = notaTemp;
        }
        cantidadEstudiantes++;
        printf("Estudiante agregado exitosamente.\n");
        if (cantidadEstudiantes >= MAX) {
            printf("Se ha alcanzado el maximo de estudiantes permitidos.\n");
            break;
        }
        char continuar;
        printf("¿Desea agregar otro estudiante? (s/n): ");
        while (getchar() != '\n');
        scanf("%c", &continuar);
        if (continuar != 's' && continuar != 'S') {
            break;
        }
    }
}

int codigounico(int codigo, int actual) {
    for (int i = 0; i < actual; i++) {
        if (estudiantes[i].codigo == codigo) {
            return 0;
        }
    }
    return 1;
}

void buscarEstudiante() {
    if (cantidadEstudiantes == 0) {
        printf("No hay estudiantes registrados.\n");
        return;
    }
    int codigobuscado;
    printf("Ingrese el codigo del estudiante a buscar: ");
    while (scanf("%d", &codigobuscado) != 1) {
        printf("Codigo invalido. Ingrese un codigo numerico: ");
        while (getchar() != '\n');
    }

    for (int i = 0; i < cantidadEstudiantes; i++) {
        if (estudiantes[i].codigo == codigobuscado) {
            printf("Estudiante encontrado:\n");
            printf("%20s%20s%20s%20s%20s%20s\n", "Codigo", "Nombre", "Nota1", "Nota2", "Nota3", "Promedio");
            estudiantes[i].promedio = (estudiantes[i].notas[0] + estudiantes[i].notas[1] + estudiantes[i].notas[2]) / 3;
            printf("%20d%20s%20.2f%20.2f%20.2f%20.2f\n",
                   estudiantes[i].codigo,
                   estudiantes[i].nombre,
                   estudiantes[i].notas[0],
                   estudiantes[i].notas[1],
                   estudiantes[i].notas[2],
                   estudiantes[i].promedio);
            return;
        }
    }
    printf("Estudiante con codigo %d no encontrado.\n", codigobuscado);
}

void borrarEstudiante() {
    if (cantidadEstudiantes == 0) {
        printf("No hay estudiantes registrados.\n");
        return;
    }
    int codigoBorrar;
    printf("Ingrese el codigo del estudiante a borrar: ");
    while (scanf("%d", &codigoBorrar) != 1) {
        printf("Codigo invalido. Ingrese un codigo numerico: ");
        while (getchar() != '\n');
    }
    for (int i = 0; i < cantidadEstudiantes; i++) {
        if (estudiantes[i].codigo == codigoBorrar) {
            for (int j = i; j < cantidadEstudiantes - 1; j++) {
                estudiantes[j] = estudiantes[j + 1];
            }
            cantidadEstudiantes--;
            printf("Estudiante con codigo %d borrado.\n", codigoBorrar);
            return;
        }
    }
    printf("Estudiante con codigo %d no encontrado.\n", codigoBorrar);
}

void imprimir() {
    if (cantidadEstudiantes == 0) {
        printf("No hay estudiantes registrados.\n");
        return;
    }
    printf("%20s%20s%20s%20s%20s%20s\n", "Codigo", "Nombre", "Nota1", "Nota2", "Nota3", "Promedio");
    printf("-------------------------------------------------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < cantidadEstudiantes; i++) {
        estudiantes[i].promedio = (estudiantes[i].notas[0] + estudiantes[i].notas[1] + estudiantes[i].notas[2]) / 3;
        printf("%20d%20s%20.2f%20.2f%20.2f%20.2f\n",
               estudiantes[i].codigo,
               estudiantes[i].nombre,
               estudiantes[i].notas[0],
               estudiantes[i].notas[1],
               estudiantes[i].notas[2],
               estudiantes[i].promedio);
    }
}

void menu() {
    int opcion;
    do {
        printf("\nMenu de opciones:\n");
        printf("1. Agregar datos de los estudiantes\n");
        printf("2. Buscar estudiante por codigo\n");
        printf("3. Borrar estudiante por codigo\n");
        printf("4. Imprimir Promedios Generales\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        while (scanf("%d", &opcion) != 1) {
            printf("Opcion invalida. Ingrese un numero: ");
            while (getchar() != '\n');
        }
        switch(opcion) {
            case 1:
                ingresarDatos();
                break;
            case 2:
                buscarEstudiante();
                break;
            case 3:
                borrarEstudiante();
                break;
            case 4:
                imprimir();
                break;
            case 5:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion invalida. Intente nuevamente.\n");
        }
    } while(opcion != 5);
}
