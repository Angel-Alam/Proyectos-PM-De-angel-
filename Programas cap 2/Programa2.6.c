#include <stdio.h>

/* Incremento de salario.
El programa, al recibir como dato el nivel de un profesor, incrementa su
salario en función de la tabla 2.3.
NIV: variable de tipo entero.
SAL: variable de tipo real. */

void main(void)
{
    float SAL;
    int NIV;

    // Solicitar el nivel y el salario del profesor
    printf("Ingrese el nivel académico del profesor: ");
    scanf("%d", &NIV);

    printf("Ingrese el salario: ");
    scanf("%f", &SAL);

    // Estructura switch para determinar el incremento según el nivel
    switch(NIV)
    {
        case 1: 
            SAL = SAL * 1.0035; 
            break;
        
        case 2: 
            SAL = SAL * 1.0041; 
            break;
        
        case 3: 
            SAL = SAL * 1.0048; 
            break;
        
        case 4: 
            SAL = SAL * 1.0053; 
            break;
        
        default: 
            printf("Nivel no válido.\n");
            return; // Terminar el programa si el nivel no es válido.
    }

    // Imprimir el nuevo salario
    printf("\n\nNivel: %d \tNuevo salario: %8.2f\n", NIV, SAL);
}
