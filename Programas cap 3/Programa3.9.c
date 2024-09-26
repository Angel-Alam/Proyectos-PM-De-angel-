#include <stdio.h>
// Se incluye la biblioteca estándar de entrada/salida.

/* Serie.
   El programa imprime los términos y obtiene la suma de una determinada serie.
   I, SSE y CAM: variables de tipo entero. */

void main(void)
// Definición de la función principal del programa.
{
    int I = 2, CAM = 1;
    // Se inicializan dos variables enteras:
    // I: el primer número de la serie, comenzando en 2.
    // CAM: controla si la suma es de 5 o de 3 en cada iteración.

    long SSE = 0;
    // Se inicializa la variable SSE (acumulador de la suma de la serie) en 0.

    while (I <= 2500)
    // El ciclo se ejecuta mientras el valor de I sea menor o igual a 2500.
    {
        SSE = SSE + I;
        // Se agrega el valor actual de I al acumulador SSE.

        printf("\t %d", I);
        // Se imprime el valor actual de I, con una tabulación para espaciar los valores.

        if (CAM)
        // Si CAM es igual a 1, entonces sumamos 5 a I.
        {
            I += 5;
            CAM--;
            // Se resta 1 a CAM, cambiando su valor a 0.
        }
        else
        // Si CAM es igual a 0, sumamos 3 a I.
        {
            I += 3;
            CAM++;
            // Se incrementa CAM en 1, regresando su valor a 1.
        }
    }

    printf("\nLa suma de la serie es: %ld", SSE);
    // Una vez que el ciclo termina, se imprime la suma total acumulada en SSE.
}
