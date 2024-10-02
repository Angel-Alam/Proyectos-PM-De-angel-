#include <stdio.h>

/* Funciones y parámetros. */
int z, y; /* Variables globales. */
int F1(float);
void F2(float, int *); /* Prototipos de funciones. */

int main(void) { // Cambié void main a int main
    int w;
    float x;
    
    z = 5;
    y = 7;
    w = 2;
    x = (float)y / z; // Cálculo de x
    printf("\nPrograma Principal: %d %d %.2f %d", z, y, x, w);
    
    F2(x, &w); // Llamada a la función F2
    printf("\nPrograma Principal: %d %d %.2f %d", z, y, x, w);

    return 0; // Retorna 0 al final de main
}

int F1(float x) {
    int k;
    if (x != 0) {
        k = z - y; // Cálculo de k si x no es 0
        x++;
    } else {
        k = z + y; // Cálculo de k si x es 0
    }
    printf("\nF1: %d %d %.2f %d", z, y, x, k);
    return k; // Retorna el valor de k
}

void F2(float t, int *r) {
    int y; // Variable local a F2
    y = 5;
    z = 0; // Asigna 0 a z
    printf("\nF2: %d %d %.2f %d", z, y, t, *r);
    
    if (z == 0) { // Si z es 0, realiza la operación
        z = (*r) * 2; // Duplicar el valor apuntado por r
        t = (float)z / 3; // Calcular t
        printf("\nIngresa el valor: ");
        scanf("%d", r); // Leer un valor de entrada
        printf("\nF2: %d %d %.2f %d", z, y, t, *r);
    } else {
        z = (*r) * 2; // Duplicar el valor apuntado por r
        printf("\nF2: %d %d %.2f %d", z, y, t, *r);
    }
    
    *r = F1(t); // Llamada a F1 con t
}
