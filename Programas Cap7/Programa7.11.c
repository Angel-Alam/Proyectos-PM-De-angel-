#include <stdio.h>
#include <ctype.h>

/* Verifica.
   El programa, al recibir como datos una cadena de caracteres y una posición específica en la cadena,
   determina si el carácter correspondiente es una letra minúscula. */
int main(void) {
    char p, cad[50];
    int n;

    printf("\nIngrese la cadena de caracteres (máximo 50): ");
    fgets(cad, sizeof(cad), stdin); // Cambiar gets por fgets
    cad[strcspn(cad, "\n")] = '\0'; // Eliminar el salto de línea

    printf("\nIngrese la posición en la cadena que desea verificar: ");
    scanf("%d", &n);

    // Verificar que n sea una posición válida (1 a 50) y ajustarlo a índice 0
    if (n > 0 && n <= 50) {
        p = cad[n - 1]; // Ajustar n para usarlo como índice (0 a 49)
        if (islower(p)) {
            printf("\n%c es una letra minúscula\n", p);
        } else {
            printf("\n%c no es una letra minúscula\n", p);
        }
    } else {
        printf("\nEl valor ingresado de n es incorrecto\n");
    }

    return 0; // Retornar 0 en main
}
