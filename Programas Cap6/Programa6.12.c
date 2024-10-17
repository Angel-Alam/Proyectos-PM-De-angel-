#include <stdio.h>
/* Lluvias.
El programa, al recibir como dato un arreglo tridimensional que contiene
información sobre lluvias, genera información estadística. */
const int PRO = 24;
const int MES = 12;
const int AÑO = 10;

void Lectura(float[PRO][MES][AÑO], int, int, int);
void Funcion1(float[PRO][MES][AÑO], int, int, int);  /* Prototipos de funciones. */
void Funcion2(float[PRO][MES][AÑO], int, int, int);
void Funcion3(float[PRO][MES][AÑO], int, int, int);

int main(void) {
    float LLU[PRO][MES][AÑO];
    Lectura(LLU, PRO, MES, AÑO);
    Funcion1(LLU, PRO, MES, AÑO);
    Funcion2(LLU, PRO, MES, AÑO);
    Funcion3(LLU, PRO, MES, AÑO);
    
    return 0;
}

void Lectura(float A[][MES][AÑO], int F, int C, int P) {
    /* Esta función se utiliza para leer un arreglo tridimensional de tipo real de
    F filas, C columnas y P planos de profundidad. */
    int K, I, J;
    for (K = 0; K < P; K++)
        for (I = 0; I < F; I++)
            for (J = 0; J < C; J++) {
                printf("Año: %d\tProvincia: %d\tMes: %d: ", K + 1, I + 1, J + 1);
                scanf("%f", &A[I][J][K]);
            }
}

void Funcion1(float A[][MES][AÑO], int F, int C, int P) {
    /* Esta función se utiliza para localizar la provincia que tuvo el mayor registro
    de precipitación pluvial en los últimos 10 años. Escribe además el registro
    correspondiente. */
    int I, K, J, EMAY = -1;
    float ELLU = -1.0, SUM;
    
    for (I = 0; I < F; I++) {
        SUM = 0.0;
        for (K = 0; K < P; K++)
            for (J = 0; J < C; J++)
                SUM += A[I][J][K];
        
        SUM /= P * C; // Promedio
        if (SUM > ELLU) {
            ELLU = SUM;
            EMAY = I;
        }
    }
    
    printf("\n\nProvincia con mayor registro de lluvias: %d", EMAY + 1);
    printf("\nRegistro: %.2f", ELLU);
}

void Funcion2(float A[][MES][AÑO], int F, int C, int P) {
    /* Esta función se utiliza para localizar la provincia que tuvo el menor registro
    de lluvias en el último año. Escribe además el registro correspondiente. */
    int I, J, EMEN = -1;
    float ELLU = 1000, SUM;
    
    for (I = 0; I < F; I++) {
        SUM = 0;
        for (J = 0; J < C; J++)
            SUM += A[I][J][P - 1]; // Último año
        
        SUM /= C; // Promedio
        if (SUM < ELLU) {
            ELLU = SUM;
            EMEN = I;
        }
    }
    
    printf("\n\nProvincia con menor registro anual de lluvias en el último año: %d", 
           EMEN + 1);
    printf("\nRegistro anual: %.2f", ELLU);
}

void Funcion3(float A[][MES][AÑO], int F, int C, int P) {
    /* Esta función se utiliza para localizar el mes con mayor registro de lluvias en
    la provincia 18 en el quinto año. Escribe además el registro correspondiente. */
    int J, EMES = -1;
    float ELLU = -1.0;
    
    for (J = 0; J < C; J++) {
        if (A[17][J][4] > ELLU) { // Provincia 18 (índice 17) y quinto año (índice 4)
            ELLU = A[17][J][4];
            EMES = J;
        }
    }
    
    printf("\n\nMes con mayor registro de lluvias en la provincia 18 (año 5): %d", 
           EMES + 1);
    printf("\nRegistro: %.2f", ELLU);
}
