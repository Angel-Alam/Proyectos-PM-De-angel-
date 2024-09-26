#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

/* Números perfectos.
El programa, al recibir como dato un número entero positivo como límite, obtiene
los números perfectos que hay entre 1 y ese número, y además imprime cuántos números perfectos hay en el intervalo.
I, J, NUM, SUM, C: variables de tipo entero. */

// Función principal del programa
int main(void) {
    // Declaración de variables
    int I, J, NUM, SUM, C = 0; // C se inicializa en 0 para contar los números perfectos

    // Pide al usuario que ingrese un número límite
    printf("\nIngrese el número límite: ");
    scanf("%d", &NUM);
    
    // Bucle para iterar desde 1 hasta NUM
    for (I = 1; I <= NUM; I++) {
        SUM = 0; // Reinicia la suma para el nuevo número
        
        // Bucle para encontrar los divisores de I
        for (J = 1; J <= (I / 2); J++) {
            if ((I % J) == 0) { // Verifica si J es un divisor de I
                SUM += J; // Suma el divisor
            }
        }
        
        // Verifica si la suma de divisores es igual al número I
        if (SUM == I) {
            printf("\n%d es un número perfecto", I); // Imprime el número perfecto
            C++; // Incrementa el contador de números perfectos
        }
    }

    // Imprime el total de números perfectos encontrados
    printf("\nEntre 1 y %d hay %d números perfectos", NUM, C);
    
    return 0; // Retorna 0 para indicar que el programa finalizó correctamente
}
