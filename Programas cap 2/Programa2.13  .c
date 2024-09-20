#include <stdio.h>
#include <math.h>

/* Función.
El programa, al recibir como dato un valor entero, calcula el resultado de
una función.
Y: variable de tipo entero.
X: variable de tipo real. */

void main(void)
{
    float X;
    int Y;

    // Solicitar el valor de Y
    printf("Ingrese el valor de Y: ");
    scanf("%d", &Y);

    // Calcular el valor de X según el valor de Y
    if (Y < 0 || Y > 50) {
        X = 0;
    } else if (Y <= 10) {
        X = 4.0 / Y - Y; // Asegurarse de que 4 sea un float
    } else if (Y <= 25) {
        X = pow(Y, 3) - 12;
    } else {
        X = pow(Y, 2) + pow(Y, 3) - 18; // Corregido el símbolo de resta
    }

    // Mostrar los resultados
    printf("\n\nY = %d\tX = %8.2f\n", Y, X);
}
