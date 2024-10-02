#include <stdio.h>

/* Conflicto de variables con el mismo nombre. */
void f1(void);            /* Prototipo de función. */
int K = 5;                /* Variable global. */

int main(void) {
    int I;
    for (I = 1; I <= 3; I++)
        f1();
    return 0;
}

void f1(void) {           /* La función utiliza tanto la variable local K como la variable global K. */
    int local_K = 2;      /* Cambiamos el nombre de la variable local a local_K para evitar conflictos. */
    local_K += local_K;
    printf("\n\nEl valor de la variable local es: %d", local_K);

    K = K + local_K;      /* Uso de la variable global directamente. */
    printf("\nEl valor de la variable global es: %d", K);
}
