#include <stdio.h>
/* Ordenación por selección directa. */
const int MAX = 100;

void Lectura(int *, int); // Prototipos de funciones.
void Ordena(int *, int);
void Imprime(int *, int);

int main(void) {
    int TAM, VEC[MAX]; 
    
    do {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > MAX || TAM < 1);  
    /* Se verifica que el tamaño del arreglo sea correcto. */

    Lectura(VEC, TAM);
    Ordena(VEC, TAM);
    Imprime(VEC, TAM);
    
    return 0; // Indicate successful termination
}

void Lectura(int A[], int T) {
    /* La función Lectura se utiliza para leer un arreglo unidimensional de T elementos de tipo entero. */
    for (int I = 0; I < T; I++) {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

void Imprime(int A[], int T) {
    /* Esta función se utiliza para escribir un arreglo unidimensional ordenado de T elementos de tipo entero. */
    for (int I = 0; I < T; I++) {
        printf("\nA[%d]: %d", I, A[I]);
    }
}

void Ordena(int A[], int T) {
    /* La función Ordena utiliza el método de selección directa para ordenar los elementos del arreglo unidimensional A. */
    for (int I = 0; I < (T - 1); I++) {
        int MEN = A[I];
        int L = I;
        for (int J = (I + 1); J < T; J++) {
            if (A[J] < MEN) {
                MEN = A[J];
                L = J;
            }
        }
        // Intercambio de elementos
        A[L] = A[I];
        A[I] = MEN;
    }
}
