#include <stdio.h>
#include <stdlib.h>

/* Funciones para el manejo de caracteres de la biblioteca stdlib.h. */
int main(void) {
    int i;
    double d;
    long l;
    char cad0[20], *cad1;

    // Leer una cadena de caracteres
    printf("\nIngrese una cadena de caracteres: ");
    fgets(cad0, sizeof(cad0), stdin); // Usar fgets en lugar de gets para mayor seguridad

    // Convertir la cadena a entero
    i = atoi(cad0);
    printf("\n%s \t %d", cad0, i + 3); // Imprimir el valor de i + 3

    // Leer otra cadena de caracteres
    printf("\nIngrese una cadena de caracteres: ");
    fgets(cad0, sizeof(cad0), stdin); // Usar fgets para leer la cadena

    // Convertir la cadena a double
    d = atof(cad0);
    printf("\n%s \t %.2lf", cad0, d + 1.50);

    // Usar strtod para convertir la cadena a double
    d = strtod(cad0, &cad1);
    printf("\n%s \t %.2lf", cad0, d + 1.50);
    puts(cad1); // Imprimir el resto de la cadena

    // Convertir la cadena a long
    l = atol(cad0);
    printf("\n%s \t %ld", cad0, l + 10);

    // Usar strtol para convertir la cadena a long
    l = strtol(cad0, &cad1, 0);
    printf("\n%s \t %ld", cad0, l + 10);
    puts(cad1); // Imprimir el resto de la cadena

    return 0; // Salida del programa
}
