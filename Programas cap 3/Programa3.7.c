#include <stdio.h>
// Se incluye la biblioteca estándar de entrada/salida.

/* Lanzamiento de martillo.
   El programa, al recibir como dato N lanzamientos de martillo, calcula el promedio
   de los lanzamientos de la atleta cubana. 
   I, N: variables de tipo entero. 
   LAN, SLA: variables de tipo real. */

void main(void)
// Definición de la función principal del programa.
{
    int I, N;
    // Se declaran las variables enteras I (contador para los lanzamientos) y N (número de lanzamientos).

    float LAN, SLA = 0;
    // Se declaran las variables de tipo float: 
    // LAN para almacenar el valor de cada lanzamiento
    // SLA (acumulador) se inicializa en 0 para almacenar la suma de los lanzamientos.

    do
    {
        printf("Ingrese el número de lanzamientos:\t");
        // Se solicita al usuario que ingrese el número de lanzamientos.

        scanf("%d", &N);
        // Se lee el valor ingresado por el usuario y se almacena en N.
    }
    while (N < 1 || N > 11);
    // El ciclo se repetirá hasta que el número de lanzamientos (N) sea entre 1 y 11.

    /* Se utiliza la estructura do-while para verificar que el valor de N sea correcto. */

    for (I = 1; I <= N; I++)
    // Ciclo for que se repite N veces para ingresar los lanzamientos.
    {
        printf("\nIngrese el lanzamiento %d: ", I);
        // Se solicita al usuario que ingrese el valor del lanzamiento actual (I).

        scanf("%f", &LAN);
        // Se lee el valor del lanzamiento y se almacena en LAN.

        SLA = SLA + LAN;
        // Se suma el valor de LAN al acumulador SLA.
    }

    SLA = SLA / N;
    // Se calcula el promedio de los lanzamientos dividiendo la suma total (SLA) entre N.

    printf("\nEl promedio de lanzamientos es: %.2f", SLA);
    // Se imprime el promedio de los lanzamientos.
}
