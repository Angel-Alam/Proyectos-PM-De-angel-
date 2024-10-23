#include <stdio.h>
#include <string.h>

/* Cadena invertida.
   El programa obtiene la cadena invertida. */
char * inverso(char *); /* Prototipo de función. */

int main(void) {
    char fra[50];
    printf("\nIngrese la línea de texto: ");
    fgets(fra, sizeof(fra), stdin); // Cambiar gets por fgets
    fra[strcspn(fra, "\n")] = '\0'; // Eliminar salto de línea si existe

    // Crear un arreglo para almacenar la cadena invertida
    char aux[50];
    strcpy(aux, inverso(fra)); // Se copia a aux el resultado de la función inverso.
    
    printf("\nEscribe la línea de texto en forma inversa: ");
    puts(aux);

    return 0; // Retornar 0 en main
}

char * inverso(char *cadena) {
    int i = 0, j;
    j = strlen(cadena) - 1; // Posición del último carácter

    // Reemplazo de caracteres para invertir la cadena
    while (i < j) {
        char cad = cadena[i];
        cadena[i] = cadena[j];
        cadena[j] = cad;
        i++;
        j--;
    }
    return cadena; // Regresa la cadena invertida
}
