#include <stdio.h>

/* Múltiplo.
El programa, al recibir como datos dos números enteros, determina si
el segundo es múltiplo del primero. */

int multiplo(int N1, int N2); /* Prototipo de función. */

int main(void) {
    int NU1, NU2, RES;
    printf("\nIngresa los dos números: ");
    scanf("%d %d", &NU1, &NU2);
    RES = multiplo(NU1, NU2); 
    if (RES) {
        printf("\nEl segundo número es múltiplo del primero.");
    } else {
        printf("\nEl segundo número no es múltiplo del primero.");
    }
    
    return 0;
}

int multiplo(int N1, int N2) {
    /* Esta función determina si N2 es múltiplo de N1. */
    if ((N2 % N1) == 0)
        return 1;  // N2 es múltiplo de N1.
    else
        return 0;  // N2 no es múltiplo de N1.
}
