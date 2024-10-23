#include <stdio.h>
#include <string.h>

/* Cuenta cadenas.
   El programa, al recibir dos cadenas de caracteres, calcula e imprime cuántas
   veces se encuentra la segunda cadena en la primera. */

int main(void) {
    char cad1[50], cad2[50];
    int count = 0; // Contador de ocurrencias
    char *cad0; // Apuntador para buscar

    printf("\nIngrese la primera cadena de caracteres: ");
    fgets(cad1, sizeof(cad1), stdin); // Cambiar gets por fgets

    printf("Ingrese la cadena a buscar: ");
    fgets(cad2, sizeof(cad2), stdin); // Cambiar gets por fgets

    // Eliminar el salto de línea que puede quedar al usar fgets
    cad1[strcspn(cad1, "\n")] = '\0';
    cad2[strcspn(cad2, "\n")] = '\0';

    // Buscar la primera ocurrencia de cad2 en cad1
    cad0 = strstr(cad1, cad2);
    
    while (cad0 != NULL) {
        count++;
        cad0 = strstr(cad0 + 1, cad2); // Buscar desde la siguiente posición
    }

    printf("\nEl número de veces que aparece la segunda cadena es: %d\n", count);
    return 0; // Retornar 0 en main
}
