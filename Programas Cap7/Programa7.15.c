#include <stdio.h>
#include <ctype.h>

/* Decodifica.
   El programa decodifica una cadena de caracteres compuesta por números y letras. */
void interpreta(char *); /* Prototipo de función. */

int main(void) {
    char cad[50];
    printf("\nIngrese la cadena de caracteres: ");
    fgets(cad, sizeof(cad), stdin); // Cambiar gets por fgets

    // Eliminar el salto de línea que puede quedar al usar fgets
    cad[strcspn(cad, "\n")] = '\0';

    interpreta(cad);
    return 0; // Retornar 0 en main
}

void interpreta(char *cadena) {
    /* Esta función se utiliza para decodificar la cadena de caracteres. */
    int i = 0, j, k;

    while (cadena[i] != '\0') {
        if (isalpha(cadena[i])) { /* Se utiliza isalpha para observar si el caracter es una letra. */
            if (i > 0 && isdigit(cadena[i - 1])) { // Asegúrate de que el anterior sea un dígito
                k = cadena[i - 1] - '0'; // Convertir el carácter a entero

                for (j = 0; j < k; j++) {
                    putchar(cadena[i]);
                    putchar(' '); // Agregar espacio para mejor legibilidad
                }
            }
        }
        i++;
    }
    putchar('\n'); // Añadir nueva línea al final
}
