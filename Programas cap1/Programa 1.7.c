#include <stdio.h>

/* Medidas.
El programa, al recibir como datos la longitud y el peso de un objeto
expresados en pies y libras, calcula los datos de este objeto pero en
metros y kilogramos, respectivamente.
PIE, LIB, MET y KIL: variables de tipo real. */

int main(void)
{
    float PIE, LIB, MET, KIL;

    printf("Ingrese los datos del objeto (longitud en pies y peso en libras): ");
    scanf("%f %f", &PIE, &LIB);

    MET = PIE * 0.3048;  // 1 pie = 0.3048 metros
    KIL = LIB * 0.45359; // 1 libra = 0.45359 kilogramos

    printf("\nDatos del objeto \nLongitud: %5.2f metros\tPeso: %5.2f kilogramos\n", MET, KIL);

    return 0;
}
