#include <stdio.h>
#include <math.h>

/* Función matemática.
El programa obtiene el resultado de una función.
OP y T: variables de tipo entero.
RES: variable de tipo real. */

void main(void)
{
    int OP, T;
    float RES; // Mueve la declaración de RES al inicio.
    
    // Solicitar la entrada al usuario
    printf("Ingrese la opción del cálculo y el valor entero: ");
    scanf("%d %d", &OP, &T);

    // Estructura switch para las opciones
    switch(OP)
    {
        case 1: 
            RES = T / 5.0; // Dividir por 5.0 para obtener un resultado flotante.
            break;
        
        case 2: 
            RES = pow(T, T); // Usar la función pow para exponenciación.
            break;
        
        case 3:
        case 4: 
            RES = 6 * T / 2.0; // Operación matemática.
            break;
        
        default: 
            RES = 1; // Valor por defecto.
            break;
    }

    // Imprimir el resultado
    printf("\nResultado: %7.2f\n", RES);
}
