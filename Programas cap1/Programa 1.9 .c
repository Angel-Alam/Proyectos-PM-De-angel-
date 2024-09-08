#include <stdio.h>

/* Estancia
El programa, al recibir como dato la superficie de una estancia expresada
en acres, la convierte a hectáreas.
ECA: variable de tipo real. */

int main(void)
{
    float ECA;

    printf("Ingrese la extensión de la estancia en acres: ");
    scanf("%f", &ECA);

    ECA = ECA * 0.4047;  // Conversión directa de acres a hectáreas

    printf("\nExtensión de la estancia en hectáreas: %5.2f\n", ECA);

    return 0;
}
