#include <stdio.h>
/* Primos.
El programa almacena en un arreglo unidimensional los primeros 100 números
primos. */

const int TAM = 100;
void Imprime(int[], int);                /* Prototipos de funciones. */
void Primo(int, int *);

int main(void)
{
    int P[TAM] = {1, 2};  /* Se inicializa el arreglo con los primeros dos números primos. */
    int FLA, J = 2, PRI = 3;

    while (J < TAM)
    {
        FLA = 1;
        Primo(PRI, &FLA);       /* Se llama a la función que determina si PRI es primo. */
        
        if (FLA)                /* Si FLA es 1, entonces PRI es primo. */
        {
            P[J] = PRI;
            J++;
        }
        PRI += 2;               /* Se prueban sólo números impares. */
    }

    Imprime(P, TAM);

    return 0;
}

void Primo(int A, int *B)
/* Esta función determina si A es primo, en cuyo caso el valor de *B no se
altera. */
{
    int DI = 3;
    while (*B && (DI <= (A / 2)))
    {
        if ((A % DI) == 0)
            *B = 0;
        DI++;
    }
}

void Imprime(int Primos[], int T)
/* Esta función imprime el arreglo unidimensional de números primos. */
{
    int I;
    for (I = 0; I < T; I++)
        printf("\nPrimos[%d]: %d", I, Primos[I]);
}
