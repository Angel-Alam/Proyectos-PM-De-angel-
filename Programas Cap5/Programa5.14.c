#include <stdio.h>
#include <math.h>

/* Estadístico.
   El programa, al recibir como dato un arreglo unidimensional de enteros
   que contiene calificaciones, calcula la media, la varianza, la
   desviación estándar y la moda. */

const int MAX = 100;

void Lectura(int *, int);
float Media(int *, int);
float Varianza(int *, int, float);  // Prototipos de funciones.
float Desviacion(float);
void Frecuencia(int *, int, int *);
int Moda(int *, int);

int main(void) {
    int TAM, MOD, ALU[MAX], FRE[11] = {0};
    float MED, VAR, DES;

    do {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > MAX || TAM < 1);  
    /* Se verifica que el tamaño del arreglo sea correcto. */

    Lectura(ALU, TAM);
    MED = Media(ALU, TAM);
    VAR = Varianza(ALU, TAM, MED);
    DES = Desviacion(VAR);
    Frecuencia(ALU, TAM, FRE);
    MOD = Moda(FRE, 11);

    printf("\nMedia:      %.2f", MED);
    printf("\nVarianza:   %.2f", VAR);
    printf("\nDesviación: %.2f", DES);
    printf("\nModa:       %d\n", MOD);

    return 0; // Indicate successful termination
}

void Lectura(int A[], int T) {
    /* La función Lectura se utiliza para leer un arreglo unidimensional de T
       elementos de tipo entero. */
    for (int I = 0; I < T; I++) {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

float Media(int A[], int T) {
    /* Esta función se utiliza para calcular la media. */
    float suma = 0.0;
    for (int I = 0; I < T; I++) {
        suma += A[I];
    }
    return suma / T;
}

float Varianza(int A[], int T, float MEDIA) {
    /* Esta función se utiliza para calcular la varianza. */
    float suma = 0.0;
    for (int I = 0; I < T; I++) {
        suma += pow(A[I] - MEDIA, 2);
    }
    return suma / T;
}

float Desviacion(float VAR) {
    /* Esta función se utiliza para calcular la desviación estándar. */
    return sqrt(VAR);
}

void Frecuencia(int A[], int T, int *F) {
    /* Esta función calcula la frecuencia de los elementos en el arreglo. */
    for (int I = 0; I < T; I++) {
        if (A[I] >= 0 && A[I] <= 10) {
            F[A[I]]++; // Aumenta la frecuencia del elemento.
        }
    }
}

int Moda(int F[], int T) {
    /* Esta función calcula la moda. */
    int max_freq = 0, moda = 0;
    for (int I = 0; I < T; I++) {
        if (F[I] > max_freq) {
            max_freq = F[I];
            moda = I;
        }
    }
    return moda;
}
