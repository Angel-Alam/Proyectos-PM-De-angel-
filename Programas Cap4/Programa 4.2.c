#include <stdio.h>

/* Cubo-2.
   El programa calcula el cubo de los 10 primeros números naturales con la
   ayuda de una función.
*/

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
    int I = 2;  // Variable local que oculta la global
    return (I * I * I);  // Siempre devolverá 8 porque I=2
}
