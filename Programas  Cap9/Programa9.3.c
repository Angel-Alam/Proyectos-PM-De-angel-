#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char cad[50];
    int res;
    FILE *ar;

    // Abrir el archivo en modo escritura.
    if ((ar = fopen("arc.txt", "w")) != NULL) {
        printf("\n¿Desea ingresar una cadena de caracteres? Sí-1 No-0: ");
        scanf("%d", &res);

        // Consumir el salto de línea pendiente en el búfer.
        while (getchar() != '\n');

        while (res) {
            printf("Ingrese la cadena: ");
            if (fgets(cad, sizeof(cad), stdin) != NULL) {
                // Eliminar el salto de línea al final de la entrada, si existe.
                size_t len = strlen(cad);
                if (len > 0 && cad[len - 1] == '\n') {
                    cad[len - 1] = '\0';
                }

                fputs(cad, ar); // Escribir la cadena en el archivo.

                printf("\n¿Desea ingresar otra cadena de caracteres? Sí-1 No-0: ");
                scanf("%d", &res);

                // Consumir el salto de línea pendiente.
                while (getchar() != '\n');

                if (res) {
                    fputs("\n", ar); // Agregar un salto de línea.
                }
            }
        }
        fclose(ar); // Cerrar el archivo.
    } else {
        printf("No se puede abrir el archivo\n");
    }

    return 0;
}
