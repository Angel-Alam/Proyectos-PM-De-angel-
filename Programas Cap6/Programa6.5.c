#include <stdio.h>

/* Alumnos.
   El programa, al recibir un arreglo bidimensional que contiene información
   sobre calificaciones de alumnos en cuatro materias diferentes, obtiene
   resultados estadísticos. */

const int MAX = 50; // Constante para el máximo de alumnos
const int EXA = 4;  // Constante para el número de exámenes

/* Prototipos de funciones. */
void Lectura(float[MAX][EXA], int);
void Funcion1(float[MAX][EXA], int);
void Funcion2(float[MAX][EXA], int);

int main(void) {
    int NAL; // Número de alumnos
    float ALU[MAX][EXA]; // Matriz para calificaciones de alumnos

    do {
        printf("Ingrese el número de alumnos del grupo: ");
        scanf("%d", &NAL);
    } while (NAL > MAX || NAL < 1); // Verifica que el número de alumnos sea válido.

    Lectura(ALU, NAL);
    Funcion1(ALU, NAL);
    Funcion2(ALU, NAL);

    return 0; // Finaliza el programa correctamente
}

void Lectura(float A[][EXA], int N) {
    /* La función Lectura se utiliza para leer un arreglo bidimensional de tipo
       real de N filas y EXA columnas. */
    int I, J;
    for (I = 0; I < N; I++) {
        for (J = 0; J < EXA; J++) {
            printf("Ingrese la calificación %d del alumno %d: ", J + 1, I + 1);
            scanf("%f", &A[I][J]);
        }
    }
}

void Funcion1(float A[][EXA], int T) {
    /* Esta función se utiliza para obtener el promedio de cada estudiante. */
    int I, J;
    float SUM, PRO;
    
    for (I = 0; I < T; I++) {
        SUM = 0; // Reinicia la suma para cada alumno
        for (J = 0; J < EXA; J++) {
            SUM += A[I][J];
        }
        PRO = SUM / EXA; // Calcula el promedio
        printf("\nEl promedio del alumno %d es: %5.2f", I + 1, PRO);
    }
}

void Funcion2(float A[][EXA], int T) {
    /* Esta función se utiliza tanto para obtener el promedio de cada examen,
       así como también el examen que obtuvo el promedio más alto. */
    int I, J, MAY = -1; // Inicializa MAY como -1 para indicar que aún no se ha encontrado
    float SUM, PRO, MPRO = 0;

    printf("\n");
    for (J = 0; J < EXA; J++) {
        SUM = 0; // Reinicia la suma para cada examen
        for (I = 0; I < T; I++) {
            SUM += A[I][J]; // Suma las calificaciones del examen J
        }
        PRO = SUM / T; // Calcula el promedio del examen J

        // Verifica si el promedio actual es mayor que el máximo promedio encontrado
        if (PRO > MPRO) {
            MPRO = PRO; // Actualiza el promedio máximo
            MAY = J;    // Actualiza el índice del examen con el mayor promedio
        }
        printf("\nEl promedio del examen %d es: %5.2f", J + 1, PRO);
    }
    
    // Verifica si se encontró un examen
    if (MAY != -1) {
        printf("\n\nEl examen con mayor promedio es: %d \t Promedio: %5.2f\n", MAY + 1, MPRO);
    }
}
