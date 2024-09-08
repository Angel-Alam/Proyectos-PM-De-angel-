#include <stdio.h>

/* Aplicación de operadores. */

int main(void)
{
    int i, j, k = 2, l = 7;

    i = 9 + 3 * 2;
    j = 8 % 6 + 4 * 2;
    i %= j;
    printf("\nEl valor de i es: %d", i);

    ++l;   // Incrementa l antes de usarlo
    --k;   // Decrementa k antes de usarlo
    k -= l++ * 2; // Actualiza k después de evaluar l

    printf("\nEl valor de k es: %d", k);

    i = 5 - 3 * 2 % 4; // Usar 5 en lugar de 5.5 porque i es int
    j = (i * 2 - (k = 3, --k)); // Coma se usa para la evaluación secuencial

    printf("\nEl valor de j es: %d", j);

    return 0;
}
