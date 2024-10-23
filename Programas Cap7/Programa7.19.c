#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Prototipo de la función cuentap, que cuenta el número de palabras. */
int cuentap(char *cadena);

int main(void) {
    char fra[50];
    printf("\nIngrese la línea de texto: ");
    fgets(fra, sizeof(fra), stdin);  // Uso de fgets en lugar de gets para mayor seguridad
    fra[strcspn(fra, "\n")] = '\0';  // Eliminar el salto de línea

    int num_palabras = cuentap(fra); // Contar palabras
    printf("\nLa línea de texto tiene %d palabras\n", num_palabras);

    return 0;
}

int cuentap(char *cadena) {
    int i = 0, palabras = 0;
    int en_palabra = 0; // Bandera para determinar si estamos dentro de una palabra

    while (cadena[i] != '\0') {
        if (isspace(cadena[i])) {
            en_palabra = 0; // Hemos llegado al final de una palabra
        } else if (!en_palabra) {
            en_palabra = 1; // Encontramos el inicio de una nueva palabra
            palabras++;
        }
        i++;
    }

    return palabras;
}
