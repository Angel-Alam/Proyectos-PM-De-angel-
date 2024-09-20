#include <stdio.h>

/* Empresa textil.
El programa, al recibir como datos decisivos la categoría y antigüedad de
un empleado, determina si el mismo reúne las condiciones establecidas por
la empresa para ocupar un nuevo cargo en una sucursal.
CLA, CAT, ANT, RES: variables de tipo entero.
SAL: variable de tipo real. */

void main(void)
{
    int CLA, CAT, ANT, RES;

    // Solicitar los datos del trabajador
    printf("\nIngrese la clave, categoría y antigüedad del trabajador: ");
    scanf("%d %d %d", &CLA, &CAT, &ANT);

    // Evaluar la categoría
    switch(CAT)
    {
        case 3:
        case 4:
            if (ANT >= 5)
                RES = 1; // Cumple condiciones
            else
                RES = 0; // No cumple
            break;

        case 2:
            if (ANT >= 7)
                RES = 1; // Cumple condiciones
            else
                RES = 0; // No cumple
            break;

        default:
            RES = 0; // No cumple
            break;
    }

    // Mostrar el resultado
    if (RES)
        printf("\nEl trabajador con clave %d reúne las condiciones para el puesto\n", CLA);
    else
        printf("\nEl trabajador con clave %d no reúne las condiciones para el puesto\n", CLA);
}
