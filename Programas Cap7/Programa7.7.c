#include <stdio.h>
#include <string.h>

/* Otras funciones de la biblioteca string.h para el manejo de cadenas. */
int main(void) {
    int i;
    char cad0[20] = "Hola México"; 
    char cad1[20] = "Hola Guatemala";
    char cad2[20] = "Hola Venezuela";
    char cad3[20] = "Hola México";
    char *c;
    char c3;

    // Comparar cad0 y cad1
    i = strcmp(cad0, cad1);
    printf("\nResultado de la comparación —cad0 y cad1—: %d", i);

    // Comparar cad0 y cad2
    i = strcmp(cad0, cad2);
    printf("\nResultado de la comparación —cad0 y cad2—: %d", i);

    // Comparar cad0 y cad3
    i = strcmp(cad0, cad3);
    printf("\nResultado de la comparación —cad0 y cad3—: %d", i);

    // Obtener la longitud de cad0
    i = strlen(cad0);
    printf("\nLongitud cadena cad0: %d", i);

    // Obtener la longitud de cad1
    i = strlen(cad1);
    printf("\nLongitud cadena cad1: %d", i);

    // Buscar el caracter 'G' en cad1
    c = strchr(cad1, 'G'); // c es un apuntador de tipo caracter.
    if (c != NULL) { 
        c3 = *c; // c3 toma el contenido de la celda de memoria a la que apunta c.
        printf("\nEl valor de c3 es: %c", c3);
    }

    // Buscar el caracter 'V' en cad2
    c = strchr(cad2, 'V'); 
    if (c != NULL) { 
        c3 = *c; 
        printf("\nEl valor de c3 es: %c", c3);
    }

    return 0; // Salida del programa
}
