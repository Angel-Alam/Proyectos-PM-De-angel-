#include <stdio.h>
#include <math.h>
// Se incluye la biblioteca estándar de entrada/salida y la biblioteca matemática.

/* Pares e impares.
   El programa, al recibir como datos N números enteros, obtiene la suma de los
   números pares y calcula el promedio de los impares. 
   I, N, NUM, SPA, SIM, CIM: variables de tipo entero. */

void main(void)
// Definición de la función principal del programa.
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;
    // Se declaran las variables enteras:
    // I: contador de iteraciones.
    // N: cantidad de números a procesar.
    // NUM: almacena cada número ingresado.
    // SPA: suma de los números pares.
    // SIM: suma de los números impares.
    // CIM: contador de los números impares para calcular el promedio.

    printf("Ingrese el número de datos que se van a procesar:\t");
    // Se solicita al usuario que ingrese el número de datos a procesar.

    scanf("%d", &N);
    // Se lee el número ingresado por el usuario.

    if (N > 0)
    // Se verifica que el número de datos (N) sea mayor que 0.
    {
        for (I = 1; I <= N; I++)
        // Ciclo for que itera desde 1 hasta N.
        {
            printf("\nIngrese el número %d: ", I);
            // Se solicita al usuario que ingrese el valor del número.

            scanf("%d", &NUM);
            // Se lee el número ingresado por el usuario.

            if (NUM % 2 == 0)
            // Si el número es divisible por 2, es par.
            {
                SPA = SPA + NUM;
                // Se suma el número par a la variable acumuladora SPA.
            }
            else
            // Si el número no es divisible por 2, es impar.
            {
                SIM = SIM + NUM;
                // Se suma el número impar a la variable acumuladora SIM.

                CIM++;
                // Se incrementa el contador de números impares (CIM).
            }
        }

        printf("\nLa suma de los números pares es: %d", SPA);
        // Se imprime la suma de los números pares.

        if (CIM > 0)
        // Verificamos si hay números
