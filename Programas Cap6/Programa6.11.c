#include <stdio.h>
/* Casa de bolsa.
El programa, al recibir como datos los precios mensuales de las acciones de sus
cinco fondos de inversión, además del precio de las acciones al 31 de diciembre
del 2003, genera información estadística importante para la empresa. */

void LecturaM(float [][12], int, int);
void LecturaV(float *, int);
void F1(float [][12], int, int, float *, float *);   /* Prototipos de funciones. */
void F2(float [][12], int, int);
void F3(float *, int);

int main(void) {
    float FON[5][12], PRE[5], REN[5];
    /* REN es un arreglo unidimensional de tipo real que se utilizará para almacenar */
    LecturaM(FON, 5, 12);
    LecturaV(PRE, 5);
    F1(FON, 5, 12, PRE, REN);
    F2(FON, 5, 12);
    F3(REN, 5);

    return 0;
}

void LecturaM(float A[][12], int F, int C) {
    /* Esta función se utiliza para leer un arreglo bidimensional de tipo real de F
    filas y C columnas. */
    int I, J;
    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++) {
            printf("Precio fondo %d\t mes %d:  ", I + 1, J + 1);
            scanf("%f", &A[I][J]);
        }
}

void LecturaV(float A[], int T) {
    /* Esta función se utiliza para leer un arreglo unidimensional de tipo real de T
    elementos. */
    int I;
    printf("\n");
    for (I = 0; I < T; I++) {
        printf("Precio Fondo %d al 31/12/2003:  ", I + 1);
        scanf("%f", &A[I]);
    }
}

void F1(float A[][12], int F, int C, float B[], float V[]) {
    /* La función F1 se utiliza para calcular el rendimiento anual de los fondos de
    inversión. El resultado se almacena en el arreglo unidimensional V. */
    int I;
    printf("\nRENDIMIENTOS ANUALES DE LOS FONDOS");
    for (I = 0; I < F; I++) {
        V[I] = (A[I][C - 1] - B[I]) / B[I] * 100;
        printf("\nFondo %d:   %.2f%%", I + 1, V[I]);
    }
}

void F2(float A[][12], int F, int C) {
    /* Esta función calcula el promedio anualizado de las acciones de los diferentes
    fondos. */
    int I, J;
    float promedio;

    printf("\nPROMEDIOS ANUALES DE LOS FONDOS");
    for (I = 0; I < F; I++) {
        float suma = 0.0;
        for (J = 0; J < C; J++) {
            suma += A[I][J];
        }
        promedio = suma / C;
        printf("\nFondo %d: Promedio anualizado: %.2f", I + 1, promedio);
    }
}

void F3(float A[], int T) {
    /* Esta función se utiliza para calcular y mostrar el fondo con mayor rendimiento. */
    int i, maxIndex = 0;
    float maxValue = A[0];

    for (i = 1; i < T; i++) {
        if (A[i] > maxValue) {
            maxValue = A[i];
            maxIndex = i;
        }
    }
    printf("\nFondo con mayor rendimiento: Fondo %d con rendimiento: %.2f%%", maxIndex + 1, maxValue);
}
