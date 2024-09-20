#include <stdio.h>

/* Asistentes.
El programa, al recibir como datos la matrícula, la carrera, el semestre
y el promedio de un alumno de una universidad privada, determina si
éste puede ser asistente de su carrera.
MAT, CAR y SEM: variables de tipo entero.
PRO: variable de tipo real. */

void main(void)
{
    int MAT, CAR, SEM;
    float PRO;

    // Solicitar datos del alumno
    printf("Ingrese matrícula: ");
    scanf("%d", &MAT);

    printf("Ingrese carrera (1-Industrial 2-Telemática 3-Computación 4-Mecánica): ");
    scanf("%d", &CAR);

    printf("Ingrese semestre: ");
    scanf("%d", &SEM);

    printf("Ingrese promedio: ");
    scanf("%f", &PRO);

    // Evaluar si el alumno puede ser asistente según su carrera
    switch(CAR)
    {
        case 1: // Industrial
            if (SEM >= 6 && PRO >= 8.5)
                printf("\n%d %d %5.2f", MAT, CAR, PRO);
            else
                printf("\nNo cumple con los requisitos.");
            break;

        case 2: // Telemática
            if (SEM >= 5 && PRO >= 9.0)
                printf("\n%d %d %5.2f", MAT, CAR, PRO);
            else
                printf("\nNo cumple con los requisitos.");
            break;

        case 3: // Computación
            if (SEM >= 6 && PRO >= 8.8)
                printf("\n%d %d %5.2f", MAT, CAR, PRO);
            else
                printf("\nNo cumple con los requisitos.");
            break;

        case 4: // Mecánica
            if (SEM >= 7 && PRO >= 9.0)
                printf("\n%d %d %5.2f", MAT, CAR, PRO);
            else
                printf("\nNo cumple con los requisitos.");
            break;

        default:
            printf("\nError en la carrera");
            break;
    }
}
