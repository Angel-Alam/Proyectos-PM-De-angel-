#include <stdio.h>

/* Prueba de parámetros por referencia. */
void f1(int *);  /* Prototipo de función. El parámetro es de tipo entero y por referencia. */

int main(void) {
    int I, K = 4;
    for (I = 1; I <= 3; I++) {
        printf("\n\nValor de K antes de llamar a la función: %d", ++K);
        f1(&K);  /* Llamada a la función f1. Se pasa la dirección de la variable K. */
        printf("\nValor de K después de llamar a la función: %d", K);
    }
    return 0;
}

void f1(int *R) {
    /* La función f1 recibe un parámetro por referencia. */
    /* Se utiliza el operador de indirección (*) para modificar el valor de la variable original. */
    *R += *R;
}
