#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5
#define LIMITE_PM25 25.0
#define LIMITE_CO2 400.0
#define LIMITE_SO2 20.0
#define LIMITE_NO2 40.0

float Calcular_Promedio_Ponderado(float datos[], int dias);
/*Predecir_Contaminacion_Zona;*/
void Recomendaciones(float prediccion_pm25, float prediccion_co2, float prediccion_so2, float prediccion_no2);
void Menu;

void Menu() {
    int opcion = 0;
    printf("Menu de Opciones:\n");
    printf("1. Calcular promedio ponderado de contaminantes\n");
    printf("2. Predecir contaminacion en una zona\n");
    printf("3. Recomendaciones basadas en predicciones\n");
    printf("4. Calculo de promedios historicos\n");
    printf("5. Exportacion de datos\n");
    printf("6. Salir\n");
    scanf("%d", &opcion);
    do
    {
        switch (opcion)
        {
        case 1:
            printf("Opcion 1 seleccionada: Calcular promedio ponderado de contaminantes\n");
            /* code */
            break;
        case 2:
            printf("Opcion 2 seleccionada: Predecir contaminacion en una zona\n");
            /* code */
            break;
        case 3:
            printf("Opcion 3 seleccionada: Recomendaciones basadas en predicciones\n");
            Recomendaciones();
            break;
        case 4:
            printf("Opcion 4 seleccionada: Calculo de promedios historicos\n");
            /* code */
            break;
        case 5:
            printf("Opcion 5 seleccionada: Exportacion de datos\n");
            /* code */
            break;
        case 6:
            printf("Saliendo del programa...\n");
            
            break;
        default:
            printf("Opcion no valida, por favor intente de nuevo.\n");
            
        }
    } while (opcion!= 6);
    
    
    
}

float Calcular_Promedio_Ponderado(float datos[], int dias){
    float suma= 0;
    float peso_total = 0;

    for (int i = 0; i < dias; i++)
    {
        float peso= dias - i; //Mas Peso para los dias recientes
        suma += datos[i] * peso;
        peso_total += peso;
    }
    return
    suma / peso_total;
}

/*void Predecir_Contaminacion_Zona(struct Contaminacion *zona, float *prediccion_pm25, float *prediccion_co2, float *prediccion_so2, float *prediccion_no2) {
    // Calcular predicciones basadas en promedio ponderado
    *prediccion_pm25 = calcularPromedioPonderado(zona->pm25, DIAS_HISTORICOS);
    *prediccion_co2 = calcularPromedioPonderado(zona->co2, DIAS_HISTORICOS);
    *prediccion_so2 = calcularPromedioPonderado(zona->so2, DIAS_HISTORICOS);
    *prediccion_no2 = calcularPromedioPonderado(zona->no2, DIAS_HISTORICOS);

    // Ajustar predicciones según factores climáticos actuales
    *prediccion_pm25 *= (1 + zona->temperatura / 100.0 - zona->velocidad_viento / 50.0 + zona->humedad / 200.0);
    *prediccion_co2 *= (1 + zona->temperatura / 100.0 - zona->velocidad_viento / 50.0 + zona->humedad / 200.0);
    *prediccion_so2 *= (1 + zona->temperatura / 100.0 - zona->velocidad_viento / 50.0 + zona->humedad / 200.0);
    *prediccion_no2 *= (1 + zona->temperatura / 100.0 - zona->velocidad_viento / 50.0 + zona->humedad / 200.0);
}
*/
void Recomendaciones(float prediccion_pm25, float prediccion_co2, float prediccion_so2, float prediccion_no2) {
    printf("Recomendaciones:\n");
    
    if (prediccion_pm25 > LIMITE_PM25) {
        printf("- Evitar actividades al aire libre si la PM2.5 supera %.2f\n", LIMITE_PM25);
    }
    if (prediccion_co2 > LIMITE_CO2) {
        printf("- Considerar ventilación adecuada si el CO2 supera %.2f\n", LIMITE_CO2);
    }
    if (prediccion_so2 > LIMITE_SO2) {
        printf("- Evitar áreas industriales si el SO2 supera %.2f\n", LIMITE_SO2);
    }
    if (prediccion_no2 > LIMITE_NO2) {
        printf("- Limitar exposición a tráfico intenso si el NO2 supera %.2f\n", LIMITE_NO2);
    }
}

int main() {
    Menu();
    return 0;
}
