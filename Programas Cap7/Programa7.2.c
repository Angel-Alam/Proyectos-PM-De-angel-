#include <stdio.h>
#include <ctype.h>

void main(void) {
    char p1;

    // Analizar si el carácter ingresado es un dígito
    printf("\nIngrese un caracter para analizar si éste es un dígito: ");
    p1 = getchar();
    if (isdigit(p1)) {
        printf("%c es un dígito \n", p1);
    } else {
        printf("%c no es un dígito \n", p1);
    }

    // Limpiar el búfer de entrada
    while (getchar() != '\n');

    // Examinar si el carácter ingresado es una letra
    printf("\nIngrese un caracter para examinar si éste es una letra: ");
    p1 = getchar();
    if (isalpha(p1)) {
        printf("%c es una letra \n", p1);
    } else {
        printf("%c no es una letra \n", p1);
    }

    // Limpiar el búfer de entrada
    while (getchar() != '\n');

    // Examinar si el carácter ingresado es una letra minúscula
    printf("\nIngrese un caracter para examinar si éste es una letra minúscula: ");
    p1 = getchar();
    if (isalpha(p1)) {
        if (islower(p1)) {
            printf("%c es una letra minúscula \n", p1);
        } else {
            printf("%c no es una letra minúscula \n", p1);
        }
    } else {
        printf("%c no es una letra \n", p1);
    }

    // Limpiar el búfer de entrada
    while (getchar() != '\n');

    // Convertir una letra de mayúscula a minúscula
    printf("\nIngrese una letra para convertirla de mayúscula a minúscula: ");
    p1 = getchar();
    if (isalpha(p1)) {
        if (isupper(p1)) {
            printf("%c fue convertida de mayúscula a minúscula \n", tolower(p1));
        } else {
            printf("%c es una letra minúscula \n", p1);
        }
    } else {
        printf("%c no es una letra \n", p1);
    }
}
