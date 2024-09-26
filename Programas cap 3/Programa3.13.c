#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

/* Fibonacci.
El programa calcula y escribe los primeros 50 números de Fibonacci.
I, PRI, SEG, SIG: variables de tipo entero. */

// Función principal del programa
int main(void) {
    // Declaración de variables
    int I, PRI = 0, SEG = 1, SIG;

    // Imprime los dos primeros números de Fibonacci
    printf("\t%d\t%d", PRI, SEG);

    // Ciclo para calcular y mostrar los siguientes números de Fibonacci
    for (I = 3; I <= 50; I++) { // Corregido el operador de comparación
        SIG = PRI + SEG; // Calcula el siguiente número de Fibonacci
        PRI = SEG;      // Actualiza PRI al valor de SEG
        SEG = SIG;     // Actualiza SEG al nuevo número calculado

        // Imprime el número calculado
        printf("\t%d", SIG);
    }

    printf("\n"); // Salto de línea al final de la salida
    return 0; // Retorna 0 para indicar que el programa finalizó correctamente
}
