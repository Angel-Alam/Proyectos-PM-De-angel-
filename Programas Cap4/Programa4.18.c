#include <stdio.h>
#include <math.h>

/* Expresión.
El programa escribe los valores de T, P y Q que satisfacen una determinada
expresión. */
int Expresion(int, int, int); /* Prototipo de función */

int main(void) {
    int EXP, T = 0, P = 0, Q = 0;
    
    EXP = Expresion(T, P, Q);

    while (EXP < 5500) {
        P = 0; // Reiniciar P para cada nuevo T
        while (P < 100) { // Limitar el rango de P para evitar bucles infinitos
            Q = 0; // Reiniciar Q para cada nuevo P
            while (Q < 100) { // Limitar el rango de Q
                printf("\nT: %d,  P: %d,  Q: %d, Resultado: %d", T, P, Q, EXP);
                Q++;
                EXP = Expresion(T, P, Q);
                if (EXP >= 5500) break; // Salir si se excede el límite
            }
            if (EXP >= 5500) break; // Salir si se excede el límite
            P++;
            EXP = Expresion(T, P, Q); // Actualizar EXP al cambiar P
        }
        T++;
        EXP = Expresion(T, P, Q); // Actualizar EXP al cambiar T
    }

    return 0;
}

int Expresion(int T, int P, int Q) {
    /* Esta función obtiene el resultado de la expresión para los valores
    de T, P y Q. */
    int RES;
    RES = 15 * pow(T, 4) + 12 * pow(P, 5) + 9 * pow(Q, 6);
    return RES;
}
