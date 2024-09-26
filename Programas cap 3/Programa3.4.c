#include <stdio.h>
// Se incluye la biblioteca estándar de entrada/salida.

#include <math.h>
// Se incluye la biblioteca matemática para usar funciones como pow().

 /* Suma cuadrados.
 El programa, al recibir como datos un grupo de enteros positivos, obtiene el
 cuadrado de los mismos y la suma correspondiente a dichos cuadrados. */

void main(void)
// Definición de la función principal del programa.
{
    int NUM;
    // Se declara una variable entera NUM que almacenará los números ingresados por el usuario.

    long CUA, SUC = 0;
    // Se declaran dos variables de tipo long: 
    // CUA para almacenar el cuadrado de cada número, 
    // y SUC para almacenar la suma de todos los cuadrados, inicializado en 0.

    printf("\nIngrese un número entero -0 para terminar-:\t");
    // Se solicita al usuario que ingrese el primer número.

    scanf("%d", &NUM);
    // Se lee el valor ingresado por el usuario y se almacena en NUM.

    while (NUM)
    // El ciclo while se ejecutará mientras NUM sea diferente de 0.
    {
        CUA = pow(NUM, 2);
        // Se calcula el cuadrado del número usando la función pow() y se almacena en CUA.

        printf("%d al cuadrado es %ld", NUM, CUA);
        // Se imprime el valor del número y su cuadrado.

        SUC = SUC + CUA;
        // Se suma el cuadrado calculado (CUA) al acumulador SUC.

        printf("\nIngrese un número entero -0 para terminar-:\t");
        // Se solicita al usuario que ingrese el siguiente número.

        scanf("%d", &NUM);
        // Se lee el nuevo valor de NUM.
    }

    printf("\nLa suma de los cuadrados es %ld", SUC);
    // Cuando se ingresa un 0 y el ciclo termina, se imprime la suma de los cuadrados almacenados en SUC.
}
