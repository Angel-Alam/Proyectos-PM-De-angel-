#include <stdio.h>
#include <stdlib.h>

/* Suma y promedio.
   El programa, al recibir como datos varias cadenas de caracteres que
   contienen reales, los suma y obtiene el promedio de los mismos. */
int main(void) { // Cambiar void main a int main
    char c, cad[10];
    int i = 0;
    float sum = 0.0;

    printf("\nDesea ingresar una cadena de caracteres (S/N)? ");
    c = getchar();
    getchar(); // Consumir el salto de línea después de leer el carácter

    while (c == 'S' || c == 's') { // Aceptar tanto 'S' como 's'
        printf("\nIngrese la cadena de caracteres: ");
        fgets(cad, sizeof(cad), stdin); // Cambiar gets por fgets
        cad[strcspn(cad, "\n")] = '\0'; // Eliminar el salto de línea

        sum += atof(cad); // Sumar el número convertido
        i++; // Incrementar el contador de entradas

        printf("\nDesea ingresar otra cadena de caracteres (S/N)? ");
        c = getchar();
        getchar(); // Consumir el salto de línea después de leer el carácter
    }

    // Verificar si se ingresaron números para evitar división por cero
    if (i > 0) {
        printf("\nSuma: %.2f", sum);
        printf("\nPromedio: %.2f\n", sum / i);
    } else {
        printf("\nNo se ingresaron cadenas para procesar.\n");
    }

    return 0; // Retorno de 0 en main
}
