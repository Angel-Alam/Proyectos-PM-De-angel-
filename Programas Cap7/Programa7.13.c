#include <stdio.h>
#include <string.h>

/* Calcula longitud.
   El programa calcula la longitud de la cadena sin utilizar la función strlen. */
int cuenta(char *); /* Prototipo de función. */

int main(void) {
    int i;
    char cad[50];
    
    printf("\nIngrese la cadena de caracteres: ");
    fgets(cad, sizeof(cad), stdin); // Cambiar gets por fgets
    cad[strcspn(cad, "\n")] = '\0'; // Eliminar el salto de línea

    i = cuenta(cad);
    printf("\nLongitud de la cadena: %d\n", i);
    return 0; // Retornar 0 en main
}

int cuenta(char *cadena) {
    /* La función calcula la longitud de la cadena. */
    int c = 0;
    while (cadena[c] != '\0') { // Corrección aquí
        c++;
    }
    return c;
}
