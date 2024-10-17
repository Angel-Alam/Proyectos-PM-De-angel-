#include <stdio.h>

/* Cuadrado mágico.
   El programa genera un cuadrado mágico siguiendo los criterios enunciados anteriormente. */
const int MAX = 50;  // Definición de la constante MAX

void Cuadrado(int[][MAX], int);
void Imprime(int[][MAX], int);           // Prototipos de funciones

int main(void) {
    int CMA[MAX][MAX], TAM;  // Definición de la matriz y el tamaño

    do {
        printf("Ingrese el tamaño impar de la matriz: ");
        scanf("%d", &TAM);
    } while ((TAM > MAX || TAM < 1) || (TAM % 2 == 0));   
    /* Se verifica el tamaño del arreglo y el orden (impar) del mismo. */

    Cuadrado(CMA, TAM);
    Imprime(CMA, TAM);

    return 0; // Finaliza el programa correctamente
}

void Cuadrado(int A[][MAX], int N) {
    /* Esta función se utiliza para formar el cuadrado mágico. */
    int I = 1, FIL = 0, COL = N / 2, NUM = N * N;

    while (I <= NUM) {
        A[FIL][COL] = I;  // Asignar el número en la posición

        // Calcular la siguiente posición
        if (I % N != 0) {  // Si no es un múltiplo de N
            FIL = (FIL - 1 + N) % N; // Mover hacia arriba
            COL = (COL + 1) % N;     // Mover hacia la derecha
        } else {
            FIL++; // Mover hacia abajo
        }
        I++;
    }
}

void Imprime(int A[][MAX], int N) {
    /* Esta función se utiliza para escribir el cuadrado mágico. */
    int I, J;
    for (I = 0; I < N; I++) {
        for (J = 0; J < N; J++) {
            printf("%d\t", A[I][J]); // Imprimir el elemento
        }
        printf("\n"); // Nueva línea al final de cada fila
    }
}
