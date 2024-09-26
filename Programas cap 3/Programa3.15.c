#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida
#include <math.h>  // Incluye la biblioteca matemática

/* Cálculo de P.
El programa obtiene el valor de P aplicando una serie determinada.
I, B, C: variables de tipo entero.
RES: variable de tipo real de doble precisión. */

// Función principal del programa
int main(void) {
    // Inicialización de variables
    int I = 1, B = 0, C; // I empieza en 1, B se usa como bandera, C es contador
    double RES;          // Variable para almacenar el resultado

    // Inicializa RES con el primer término de la serie
    RES = 4.0 / I;
    C = 1; // Contador de términos

    // Bucle para calcular términos hasta que la aproximación sea suficientemente precisa
    while (fabs(3.1415 - RES) > 0.0005) {
        I += 2; // Incrementa I para obtener el siguiente término en la serie
        if (B) { // Alterna entre sumar y restar
            RES += (double)(4.0 / I); // Sumar el término actual
            B = 0; // Cambia la bandera para el siguiente término
        } else {
            RES -= (double)(4.0 / I); // Restar el término actual
            B = 1; // Cambia la bandera para el siguiente término
        }
        C++; // Incrementa el contador de términos
    }

    // Imprime el número de términos utilizados en la aproximación
    printf("\nNúmero de términos: %d", C);
    return 0; // Retorna 0 para indicar que el programa finalizó correctamente
}
