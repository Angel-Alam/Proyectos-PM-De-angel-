#include <stdio.h>

/* Cadena invertida resuelta en forma recursiva. */
void inverso(char *); /* Prototipo de función. */

int main(void) {
    char fra[50];
    printf("\nIngrese la línea de texto: ");
    fgets(fra, sizeof(fra), stdin); // Cambiar gets por fgets
    fra[strcspn(fra, "\n")] = '\0'; // Eliminar salto de línea si existe

    printf("\nEscribe la línea de texto en forma inversa: ");
    inverso(fra); // Llamada a la función que invierte
    printf("\n"); // Para una mejor visualización al final
    return 0; // Retornar 0 en main
}

void inverso(char *cadena) {
    /* La función inverso obtiene precisamente el inverso de la cadena. */
    if (cadena[0] != '\0') {
        inverso(&cadena[1]); // Llamada recursiva con el siguiente carácter
        putchar(cadena[0]); // Imprime el carácter actual
    }
}
