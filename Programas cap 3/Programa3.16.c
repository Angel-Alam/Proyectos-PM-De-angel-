#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

/* Calificaciones.
El programa, al recibir un grupo de calificaciones de un alumno, obtiene el promedio de calificaciones de cada uno de ellos y, además, los alumnos con el mejor y peor promedio.
I, MAT, MAMAT y MEMAT: variables de tipo entero.
CAL, SUM, MAPRO, MEPRO y PRO: variables de tipo real. */

// Función principal del programa
int main(void) {
    // Declaración de variables
    int I, MAT, MAMAT, MEMAT;
    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0; // Inicialización de MAPRO y MEPRO

    // Pide la matrícula del primer alumno
    printf("Ingrese la matrícula del primer alumno:\t");
    scanf("%d", &MAT);
    
    // Ciclo que se repite mientras se ingresen matrículas válidas
    while (MAT) {
        SUM = 0; // Reinicia la suma para el nuevo alumno
        
        // Bucle para ingresar las calificaciones (5 calificaciones por alumno)
        for (I = 1; I <= 5; I++) { // Corrección del operador de comparación
            printf("\tIngrese la calificación del alumno (%d): ", I); // Agregado el índice I en la impresión
            scanf("%f", &CAL);
            SUM += CAL; // Acumula la suma de calificaciones
        }
        
        // Calcula el promedio de calificaciones
        PRO = SUM / 5;
        printf("\nMatrícula: %d\tPromedio: %5.2f", MAT, PRO);

        // Verifica si el promedio es el mejor
        if (PRO > MAPRO) {
            MAPRO = PRO; // Actualiza el mejor promedio
            MAMAT = MAT; // Guarda la matrícula del mejor promedio
        }
        
        // Verifica si el promedio es el peor
        if (PRO < MEPRO) {
            MEPRO = PRO; // Actualiza el peor promedio
            MEMAT = MAT; // Guarda la matrícula del peor promedio
        }
        
        // Pide la matrícula del siguiente alumno
        printf("\n\nIngrese la matrícula del siguiente alumno: ");
        scanf("%d", &MAT);
    }
    
    // Imprime los resultados finales
    printf("\n\nAlumno con mejor Promedio:\t%d\tPromedio: %5.2f", MAMAT, MAPRO);
    printf("\n\nAlumno con peor  Promedio:\t%d\tPromedio: %5.2f", MEMAT, MEPRO);
    
    return 0; // Retorna 0 para indicar que el programa finalizó correctamente
}
