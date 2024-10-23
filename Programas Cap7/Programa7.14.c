#include <stdio.h>

/* Calcula longitud en forma recursiva.
   El programa calcula de manera recursiva la longitud de la cadena sin utilizar
   la función strlen. */
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
    /* Esta función calcula la longitud de la cadena en forma recursiva. */
    if (cadena[0] == '\0') {
        return 0;
    } else {
        return (1 + cuenta(&cadena[1]));
    }
}
