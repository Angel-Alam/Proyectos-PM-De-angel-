#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida
#include <math.h>  // Incluye la biblioteca matemática

/* Serie de ULAM.
El programa, al recibir como dato un entero positivo, obtiene y escribe
la serie de ULAM.
NUM: variable de tipo entero. */

// Función principal del programa
int main(void) {
    // Declaración de la variable NUM para almacenar el número ingresado
    int NUM;
    
    // Pide al usuario que ingrese un número para calcular la serie
    printf("Ingresa el número para calcular la serie: ");
    // Lee el número ingresado por el usuario
    scanf("%d", &NUM);
    
    // Verifica si el número es mayor que 0 (entero positivo)
    if (NUM > 0) {
        // Imprime un encabezado para la serie de Ulam
        printf("\nSerie de ULAM\n");
        // Imprime el primer número de la serie
        printf("%d \t", NUM);
        
        // Ciclo que se repite mientras NUM no sea igual a 1
        while (NUM != 1) {
            // Si NUM es par (es decir, si NUM es divisible entre 2)
            if (NUM % 2 == 0) {
                // Divide NUM entre 2
                NUM = NUM / 2;
            } else {
                // Si NUM es impar, aplica la fórmula: NUM = NUM * 3 + 1
                NUM = NUM * 3 + 1;
            }
            // Imprime el siguiente número de la serie
            printf("%d \t", NUM);
        }
    } else {
        // Mensaje de error si NUM no es un entero positivo
        printf("\nNUM debe ser un entero positivo");
    }
    
    return 0; // Retorna 0 para indicar que el programa finalizó correctamente
}
