#include <stdio.h>

/* Promedio curso.
El programa, al recibir como dato el promedio de un alumno en un curso
universitario, escribe "Aprobado" si su promedio es mayor o igual a 6,
y "Reprobado" si su promedio es menor a 6.
PRO: variable de tipo real. */
 
void main(void)
{
    float PRO;
    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &PRO);
    
    if (PRO >= 6)
        printf("\nAprobado\n");
    else
        printf("\nReprobado\n");
}