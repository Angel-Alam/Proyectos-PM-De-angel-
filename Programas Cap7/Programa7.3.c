#include <stdio.h>
#include <stdlib.h> // Para uso de 'exit'

void main(void) {
    char *cad0 = "Buenos días"; // Apuntador a una cadena de caracteres
    char cad1[20] = "Hola";      // Cadena con espacio reservado para 20 caracteres
    char cad2[] = "México";      // Cadena con longitud determinada automáticamente
    char cad3[] = {'B', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', '\0'}; // Inicialización manual

    char cad4[100], cad5[100], cad6[100]; // Reservamos más espacio para leer cadenas

    // Imprimir las cadenas
    printf("\nLa cadena cad0 es: ");
    puts(cad0);

    printf("\nLa cadena cad1 es: ");
    printf("%s", cad1);

    printf("\nLa cadena cad2 es: ");
    puts(cad2);

    printf("\nLa cadena cad3 es: ");
    puts(cad3);

    // Leer una línea de texto con fgets en lugar de gets
    printf("\nIngrese una línea de texto —se lee con fgets—: \n");
    fgets(cad4, sizeof(cad4), stdin);
    printf("\nLa cadena cad4 es: ");
    puts(cad4);

    // Leer una línea de texto con scanf
    printf("\nIngrese una línea de texto —se lee con scanf—: \n");
    scanf("%99s", cad5); // Limitamos la entrada a 99 caracteres para evitar desbordamientos
    printf("\nLa cadena cad5 es: ");
    printf("%s", cad5);

    // Leer cada carácter con getchar
    char p;
    int i = 0;
    printf("\nIngrese una línea de texto —se lee cada caracter con getchar—: \n");
    while ((p = getchar()) != '\n' && i < sizeof(cad6) - 1) { // Evitar desbordamiento
        cad6[i++] = p;
    }
    cad6[i] = '\0'; // Terminación de la cadena
    printf("\nLa cadena cad6 es: ");
    puts(cad6);
}
