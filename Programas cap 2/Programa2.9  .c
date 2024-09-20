#include <stdio.h>
#include <math.h>

/* Expresión.
El programa, al recibir como datos tres valores enteros, establece si los
mismos satisfacen una expresión determinada.
R, T y Q: variables de tipo entero.
RES: variable de tipo real. */

void main(void)
{
    float RES;
    int R, T, Q;

    // Solicitar los valores de R, T y Q
    printf("Ingrese los valores de R, T y Q: ");
    scanf("%d %d %d", &R, &T, &Q);

    // Calcular la expresión
    RES = pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2);

    // Verificar si el resultado es menor que 820
    if (RES < 820)
        printf("\nR = %d\tT = %d\tQ = %d\n", R, T, Q);
}
