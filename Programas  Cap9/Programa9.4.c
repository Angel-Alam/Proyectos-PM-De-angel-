#include <stdio.h>

int main(void) {
    char cad[50];
    FILE *ap;

    // Intentar abrir el archivo en modo lectura.
    if ((ap = fopen("arc.txt", "r")) == NULL) {
        printf("No se puede abrir el archivo\n");
        return 1;
    }

    // Leer líneas del archivo hasta que se alcance el final.
    while (fgets(cad, sizeof(cad), ap) != NULL) {
        puts(cad); // Mostrar la línea en pantalla.
    }

    fclose(ap); // Cerrar el archivo.
    return 0;
}
