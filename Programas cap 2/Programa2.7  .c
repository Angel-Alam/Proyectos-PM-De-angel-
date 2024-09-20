#include <stdio.h>

/* Ventas descendentes.
El programa, al recibir como datos tres valores que representan las ventas
de los vendedores de una tienda de discos, escribe las ventas en
orden descendente.
P, S y R: variables de tipo real. */

void main(void)
{
    float P, S, R;

    // Solicitar las ventas de los tres vendedores
    printf("\nIngrese las ventas de los tres vendedores: ");
    scanf("%f %f %f", &P, &S, &R);

    // Comparar y mostrar el orden descendente de las ventas
    if (P >= S && P >= R) {
        if (S >= R) {
            printf("\nEl orden es P, S y R: %8.2f %8.2f %8.2f\n", P, S, R);
        } else {
            printf("\nEl orden es P, R y S: %8.2f %8.2f %8.2f\n", P, R, S);
        }
    } 
    else if (S >= P && S >= R) {
        if (P >= R) {
            printf("\nEl orden es S, P y R: %8.2f %8.2f %8.2f\n", S, P, R);
        } else {
            printf("\nEl orden es S, R y P: %8.2f %8.2f %8.2f\n", S, R, P);
        }
    } 
    else { // Caso cuando R es el mayor
        if (P >= S) {
            printf("\nEl orden es R, P y S: %8.2f %8.2f %8.2f\n", R, P, S);
        } else {
            printf("\nEl orden es R, S y P: %8.2f %8.2f %8.2f\n", R, S, P);
        }
    }
}
