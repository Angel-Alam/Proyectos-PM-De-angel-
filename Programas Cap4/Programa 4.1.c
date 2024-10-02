#include <stdio.h>

int cubo(void);  // Prototipo de función
int I;           // Variable global

int main(void) {
    int CUB;
    for (I = 1; I <= 10; I++) {
        CUB = cubo();  // Llamada a la función cubo
        printf("\nEl cubo de %d es: %d", I, CUB);  // Se imprime el resultado
    }
    return 0;
}

int cubo(void) {
    return (I * I * I);  // La función calcula el cubo de la variable global I
}
