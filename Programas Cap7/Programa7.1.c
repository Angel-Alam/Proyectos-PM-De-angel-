#include <stdio.h>

void main(void) {
    char p1, p2, p3 = '$';

    // Solicitar al usuario que ingrese un carácter
    printf("\nIngrese un caracter: ");
    p1 = getchar();  // Leer un carácter desde la entrada estándar
    putchar(p1);     // Escribir el carácter leído
    printf("\n");

    // Limpiar el búfer de entrada
    while (getchar() != '\n'); // Leer y descartar los caracteres hasta el fin de línea

    // Mostrar el carácter almacenado en p3
    printf("\nEl caracter p3 es: ");
    putchar(p3);
    printf("\n\nIngrese otro caracter: ");

    // Limpiar el búfer de entrada
    while (getchar() != '\n'); // Leer y descartar los caracteres hasta el fin de línea

    // Leer otro carácter utilizando scanf
    scanf("%c", &p2);
    printf("%c\n", p2); // Mostrar el segundo carácter leído
}
