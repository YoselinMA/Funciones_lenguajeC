#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para calcular la edad
void calcularEdad(int *edad_anos, int *edad_meses, int *edad_dias, int dia_nacimiento, int mes_nacimiento, int ano_nacimiento, int dia_actual, int mes_actual, int ano_actual) {
    // Calculamos los años
    *edad_anos = ano_actual - ano_nacimiento;
    
    // Calculamos los meses
    *edad_meses = mes_actual - mes_nacimiento;
    
    // Calculamos los días
    *edad_dias = dia_actual - dia_nacimiento;
    
    // Ajustamos los meses y años si los días o meses son negativos
    if (*edad_dias < 0) {
        (*edad_meses)--;
        *edad_dias += 30; // Suponemos meses de 30 días para simplicidad
    }
    if (*edad_meses < 0) {
        (*edad_anos)--;
        *edad_meses += 12;
    }
}

int main() {

    int x;
    clock_t inicio, fin;
    double tiempo;

    int dia_nacimiento, mes_nacimiento, ano_nacimiento;
    int dia_actual, mes_actual, ano_actual;
    int edad_anos, edad_meses, edad_dias;
    
    printf("Ingrese su fecha de nacimiento (DD MM AAAA): ");
    scanf("%d %d %d", &dia_nacimiento, &mes_nacimiento, &ano_nacimiento);
    
    printf("Ingrese la fecha actual (DD MM AAAA): ");
    scanf("%d %d %d", &dia_actual, &mes_actual, &ano_actual);

    inicio = clock();

    calcularEdad(&edad_anos, &edad_meses, &edad_dias, dia_nacimiento, mes_nacimiento, ano_nacimiento, dia_actual, mes_actual, ano_actual);
    
    printf("Su edad es: %d años, %d meses y %d días.\n", edad_anos, edad_meses, edad_dias);

    fin = clock();
    tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("El tiempo de ejecución del código fue de: %.6f milisegundos\n", tiempo);
    printf("Tiempo de ejecución en ciclos de reloj: %f\n", (double)(fin - inicio));
    
    return 0;
}
