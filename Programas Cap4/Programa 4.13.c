#include <stdio.h>
#include <math.h>

/* Pares e impares.
El programa, al recibir como datos N números enteros, calcula cuántos
de ellos son pares y cuántos impares, con la ayuda de una función. */

void parimp(int, int *, int *); // Prototipo de función.

int main(void) {
    int I, N, NUM, PAR = 0, IMP = 0;
    printf("Ingresa el número de datos: ");
    scanf("%d", &N);
    
    for (I = 1; I <= N; I++) {
        printf("Ingresa el número %d: ", I);
        scanf("%d", &NUM);
        parimp(NUM, &PAR, &IMP); // Llamada a la función. Paso de parámetros por valor y por referencia.
    }
    
    printf("\nNúmero de pares: %d", PAR);
    printf("\nNúmero de impares: %d\n", IMP);
    
    return 0;
}

void parimp(int NUM, int *P, int *I) {
    /* La función incrementa el parámetro *P o *I, según sea el número par o impar. */
    if (NUM % 2 == 0) {
        *P += 1; // Incrementa el contador de pares.
    } else {
        *I += 1; // Incrementa el contador de impares.
    }
}
