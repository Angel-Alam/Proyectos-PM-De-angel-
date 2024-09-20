#include <stdio.h>

/* Billete de ferrocarril.
El programa calcula el costo de un billete de ferrocarril teniendo en
cuenta la distancia entre las dos ciudades y el tiempo de permanencia
del pasajero.
DIS y TIE: variables de tipo entero.
BIL: variable de tipo real. */

void main(void)
{
    int DIS, TIE;
    float BIL;

    // Solicitar la distancia y el tiempo de estancia
    printf("Ingrese la distancia entre ciudades y el tiempo de estancia: ");
    scanf("%d %d", &DIS, &TIE);

    // Calcular el costo del billete
    if ((DIS * 2 > 500) && (TIE > 10))
        BIL = DIS * 2 * 0.19 * 0.8; // Descuento
    else
        BIL = DIS * 2 * 0.19; // Sin descuento

    // Mostrar el costo del billete
    printf("\n\nCosto del billete: %7.2f\n", BIL);
}
