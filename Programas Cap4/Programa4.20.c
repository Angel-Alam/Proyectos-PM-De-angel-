#include <stdio.h>

/* Funciones y parámetros. */
int F1(int, int *); /* Prototipo de función. */

int A = 3; /* Variables globales. */
int B = 7;
int C = 4;
int D = 2;

int main(void) {
    A = F1(C, &D); // Llama a la función F1 con C y la dirección de D
    printf("\n%d %d %d %d", A, B, C, D);

    C = 3; // Cambia C a 3
    C = F1(A, &C); // Llama a F1 con A y la dirección de C
    printf("\n%d %d %d %d", A, B, C, D);

    return 0; // Se agregó return 0 al final de main
}

int F1(int X, int *Y) {
    int A;
    A = X * (*Y); // Multiplica X por el valor al que apunta Y
    C++; // Incrementa C
    B += *Y; // Suma el valor apuntado por Y a B
    printf("\n%d %d %d %d", A, B, C, D);
    (*Y)--; // Decrementa el valor al que apunta Y
    return C; // Retorna el valor de C
}
