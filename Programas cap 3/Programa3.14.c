#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

/* Elección. 
El programa obtiene el total de votos de cada candidato y el porcentaje
correspondiente. También considera votos nulos. 
VOT, C1, C2, C3, C4, C5, NU, SVO: variables de tipo entero.
PO1, PO2, PO3, PO4, PO5, PON: variables de tipo real. */

// Función principal del programa
int main(void) {
    // Declaración de variables
    int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SVO;
    float PO1, PO2, PO3, PO4, PO5, PON;

    // Pide el primer voto al usuario
    printf("Ingrese el primer voto: ");
    scanf("%d", &VOT);
    
    // Ciclo que se repite mientras se reciban votos (hasta que se ingrese 0)
    while (VOT != 0) {
        // Evalúa el voto recibido
        switch (VOT) {
            case 1: C1++; break; // Voto para el candidato 1
            case 2: C2++; break; // Voto para el candidato 2
            case 3: C3++; break; // Voto para el candidato 3
            case 4: C4++; break; // Voto para el candidato 4
            case 5: C5++; break; // Voto para el candidato 5
            default: NU++; break; // Voto nulo
        }

        // Pide el siguiente voto
        printf("Ingrese el siguiente voto –0 para terminar–: ");
        scanf("%d", &VOT);
    }

    // Calcula el total de votos
    SVO = C1 + C2 + C3 + C4 + C5 + NU;

    // Calcula los porcentajes de votos para cada candidato y votos nulos
    if (SVO > 0) { // Evitar división por cero
        PO1 = ((float)C1 / SVO) * 100;
        PO2 = ((float)C2 / SVO) * 100;
        PO3 = ((float)C3 / SVO) * 100;
        PO4 = ((float)C4 / SVO) * 100;
        PO5 = ((float)C5 / SVO) * 100;
        PON = ((float)NU / SVO) * 100;
    } else {
        PO1 = PO2 = PO3 = PO4 = PO5 = PON = 0; // Si no hay votos, los porcentajes son 0
    }

    // Imprime el total de votos y el resultado de cada candidato
    printf("\nTotal de votos: %d", SVO);
    printf("\n\nCandidato 1: %d votos -- Porcentaje: %5.2f%%", C1, PO1);
    printf("\nCandidato 2: %d votos -- Porcentaje: %5.2f%%", C2, PO2);
    printf("\nCandidato 3: %d votos -- Porcentaje: %5.2f%%", C3, PO3);
    printf("\nCandidato 4: %d votos -- Porcentaje: %5.2f%%", C4, PO4);
    printf("\nCandidato 5: %d votos -- Porcentaje: %5.2f%%", C5, PO5);
    printf("\nNulos:       %d votos -- Porcentaje: %5.2f%%", NU, PON);
    
    return 0; // Retorna 0 para indicar que el programa finalizó correctamente
}
