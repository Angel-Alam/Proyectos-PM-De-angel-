#include <stdio.h>
#include <ctype.h>
#include <string.h>

/* Cuenta letras minúsculas y mayúsculas.
   El programa, al recibir como dato una frase, determina el número de letras
   minúsculas y mayúsculas que existen en la frase. */
int main(void) {
    char cad[50];
    int mi = 0, ma = 0;

    printf("\nIngrese la cadena de caracteres (máximo 50 caracteres): ");
    fgets(cad, sizeof(cad), stdin); // Cambiar gets por fgets
    cad[strcspn(cad, "\n")] = '\0'; // Eliminar el salto de línea

    // Contar letras minúsculas y mayúsculas
    for (int i = 0; cad[i] != '\0'; i++) {
        if (islower(cad[i])) {
            mi++;
        } else if (isupper(cad[i])) {
            ma++;
        }
    }

    printf("\nNúmero de letras minúsculas: %d", mi);
    printf("\nNúmero de letras mayúsculas: %d\n", ma);

    return 0; // Retornar 0 en main
}
