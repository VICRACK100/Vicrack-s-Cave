//En la universidad se registran los siguientes datos por alumnos: edad, cantidad de materias finales aprobadas y cantidad 
//de materias fina-les desaprobadas. Se necesita hallar y mostrar lo siguiente:
//1.Cantidad de alumnos mayores a 21 años de edad que tienen más de dos materias finales desaprobadas.
//2.Porcentaje de materias aprobadas y materias desaprobadas (por separado) de todxslxsalumnxs.
//3.Mostrar la edad de las personas que tienen el triple de materias aprobadas  con  respecto  a  las  que  desaprobaron.  
//(se  debe  hacer  mientras se efectúa el bucle)

#include <stdio.h> // Biblioteca estándar para entrada y salida de datos

int main() {
    // Declaración de variables
    int edad, materiasaprobadas, materiasreprobadas, i, alumnos; 
    int sumaaprobadas = 0, sumareprobadas = 0; // Variables acumuladoras para materias aprobadas y reprobadas
    int alumnos_condicion = 0; // Contador de alumnos que cumplen la condición (edad > 21 y más de 2 reprobadas)
    float porcentajeaprobados, porcentajedesaprobados; // Variables para almacenar los porcentajes

    // Solicita al usuario la cantidad de alumnos
    printf("¿Cuántos alumnos desea ingresar?\n");
    scanf("%d", &alumnos);

    // Bucle for para iterar sobre cada alumno ingresado
    for (i = 0; i < alumnos; i++) { 
        // Solicita y almacena la edad del estudiante
        printf("\nIngrese la edad del estudiante %d:\n", i + 1);
        scanf("%d", &edad);

        // Solicita y almacena la cantidad de materias aprobadas
        printf("Ingrese la cantidad de materias aprobadas:\n");
        scanf("%d", &materiasaprobadas);

        // Solicita y almacena la cantidad de materias reprobadas
        printf("Ingrese la cantidad de materias reprobadas:\n");
        scanf("%d", &materiasreprobadas);

        // Acumula el total de materias aprobadas y reprobadas
        sumaaprobadas += materiasaprobadas;
        sumareprobadas += materiasreprobadas;

        // Condición 1: Contar alumnos mayores de 21 años con más de dos materias reprobadas
        if (edad > 21 && materiasreprobadas > 2) {
            alumnos_condicion++;
        }

        // Condición 2: Mostrar la edad de los alumnos con el triple de materias aprobadas respecto a las reprobadas
        if (materiasaprobadas == 3 * materiasreprobadas) {
            printf("El estudiante de edad %d tiene el triple de materias aprobadas respecto a las reprobadas.\n", edad);
        }
    }

    // Calcula los porcentajes de materias aprobadas y reprobadas
    int totalmaterias = sumaaprobadas + sumareprobadas; // Total de materias evaluadas
    if (totalmaterias > 0) { // Evita la división entre cero
        porcentajeaprobados = ((float)sumaaprobadas / totalmaterias) * 100; // Porcentaje de aprobadas
        porcentajedesaprobados = ((float)sumareprobadas / totalmaterias) * 100; // Porcentaje de reprobadas
    } else { 
        // Si no hay materias ingresadas, los porcentajes son 0
        porcentajeaprobados = 0;
        porcentajedesaprobados = 0;
    }

    // Muestra los resultados finales
    printf("\nCantidad de alumnos mayores a 21 años con más de dos materias desaprobadas: %d\n", alumnos_condicion);
    printf("Porcentaje de materias aprobadas: %.2f%%\n", porcentajeaprobados);
    printf("Porcentaje de materias reprobadas: %.2f%%\n", porcentajedesaprobados);

    return 0; // Fin del programa
}
        


