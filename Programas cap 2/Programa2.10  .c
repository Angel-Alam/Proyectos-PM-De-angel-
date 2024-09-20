#include <stdio.h>
#include <math.h>

/* Par, impar o nulo.
FIN
NUM: variable de tipo entero. */

void main(void)
{
    int NUM;
    printf("Ingrese el número: ");
    scanf("%d", &NUM);

    // Verificar si el número es nulo
    if (NUM == 0) {
        printf("\nNulo\n");
    } 
    else {
        // Verificar si el número es par o impar
        if (pow(-1, NUM) > 0) {
            printf("\nPar\n");
        } 
        else {
            printf("\nImpar\n");
        }
    }
}
