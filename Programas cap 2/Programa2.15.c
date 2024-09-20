#include <stdio.h>

/* Spa.
El programa, al recibir como datos el tipo de tratamiento, la edad y el
número de días de internación de un cliente en un spa, calcula el costo
total del tratamiento.
TRA, EDA, DIA: variables de tipo entero.
COS: variable de tipo real. */

void main(void)
{
    int TRA, EDA, DIA;
    float COS;

    // Solicitar los datos
    printf("Ingrese tipo de tratamiento, edad y días: ");
    scanf("%d %d %d", &TRA, &EDA, &DIA);

    // Calcular el costo según el tipo de tratamiento
    switch(TRA)
    {
        case 1: COS = DIA * 2800; break;
        case 2: COS = DIA * 1950; break;
        case 3: COS = DIA * 2500; break;
        case 4: COS = DIA * 1150; break;
        default: COS = -1; break;
    }

    // Aplicar descuentos según la edad
    if (COS != -1)
    {
        if (EDA >= 60)
            COS *= 0.75;  // Descuento del 25%
        else if (EDA <= 25)
            COS *= 0.85;  // Descuento del 15%

        // Mostrar el resultado
        printf("\nTipo de tratamiento: %d\tDías: %d\tCosto total: %8.2f\n", TRA, DIA, COS);
    }
    else
    {
        printf("\nLa clave del tratamiento es incorrecta\n");
    }
}