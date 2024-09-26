#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

/* Examen de admisión. 
El programa, al recibir como datos una serie de calificaciones de un examen,
obtiene el rango en que se encuentran éstas.
R1, R2, R3, R4 y R5: variable de tipo entero.
CAL: variable de tipo real. */

// Función principal del programa
void main(void) {
    // Inicializa las variables R1, R2, R3, R4, R5 en 0 para contar las calificaciones en cada rango
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0;
    // Variable para almacenar la calificación del alumno, de tipo float
    float CAL;
    
    // Pide al usuario que ingrese la calificación del alumno
    printf("Ingresa la calificación del alumno: ");
    // Lee la calificación ingresada por el usuario
    scanf("%f", &CAL);
    
    // Comienza un ciclo que se repite mientras la calificación no sea -1 (para terminar el ingreso)
    while (CAL != -1) {
        // Si la calificación es menor a 4, se incrementa el contador R1
        if (CAL < 4)
            R1++;
        // Si la calificación es menor a 6, se incrementa el contador R2
        else if (CAL < 6)
            R2++;
        // Si la calificación es menor a 8, se incrementa el contador R3
        else if (CAL < 8)
            R3++;
        // Si la calificación es menor a 9, se incrementa el contador R4
        else if (CAL < 9)
            R4++;
        // Si la calificación es 9 o mayor, se incrementa el contador R5
        else
            R5++;

        // Pide al usuario que ingrese la calificación del alumno nuevamente
        printf("Ingresa la calificación del alumno: ");
        // Lee la calificación ingresada por el usuario
        scanf("%f", &CAL);
    }

    // Muestra el número de calificaciones en cada rango
    printf("\n0..3.99 = %d", R1);
    printf("\n4..5.99 = %d", R2);
    printf("\n6..7.99 = %d", R3);
    printf("\n8..8.99 = %d", R4);
    printf("\n9..10   = %d", R5);
}
