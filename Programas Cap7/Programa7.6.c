#include <stdio.h>
#include <string.h>

/* Funciones de la biblioteca string.h para el manejo de cadenas de caracteres. */
int main(void) {
    char *cad0 = "Hola México";  // Cambiar comillas incorrectas
    char cad1[20], cad2[20], cad3[20] = ", buenos días!!!";
    
    // Copiar la cadena cad0 a cad1
    strcpy(cad1, cad0);
    printf("\nPrueba de la función strcpy. Se copia la cadena cad0 a cad1: %s\n", cad1);

    // Copiar cad3 a cad1
    strcpy(cad1, cad3);
    printf("\nPrueba de la función strcpy. Se copia la cadena cad3 a cad1: %s\n", cad1);

    // Copiar la cadena "XX" a cad1
    strcpy(cad1, "XX");
    printf("\nPrueba de la función strcpy. Se copia la cadena XX a cad1: %s\n", cad1);

    // Copiar 4 caracteres de cad0 a cad2
    strncpy(cad2, cad0, 4);
    cad2[4] = '\0';  // Asegurarse de terminar la cadena
    printf("\nPrueba de la función strncpy. Se copian 4 caracteres de cad0 a cad2: %s\n", cad2);

    // Copiar 3 caracteres de cad3 a cad2
    strncpy(cad2, cad3, 3);
    cad2[3] = '\0';  // Asegurarse de terminar la cadena
    printf("\nPrueba de la función strncpy. Se copian 3 caracteres de cad3 a cad2: %s\n", cad2);

    // Concatenar cad3 a cad0
    strcat(cad0, cad3);
    printf("\nPrueba de la función strcat. Se incorpora la cadena cad3 a cad0: %s\n", cad0);

    // Concatenar " YY" a cad1
    strcat(cad1, " YY");
    printf("\nPrueba de la función strcat. Se incorpora la cadena YY a cad1: %s\n", cad1);

    // Concatenar 4 caracteres de cad0 a cad2
    strcat(cad2, " ");  // Asegúrate de añadir un espacio antes de concatenar
    strncat(cad2, cad0, 4);
    printf("\nPrueba de la función strncat. Se incorporan 4 caracteres de cad0 a cad2: %s\n", cad2);

    // Localizar la cadena "México" dentro de cad0
    char *result = strstr(cad0, "México");
    printf("\nPrueba de la función strstr. Se trata de localizar la cadena México dentro de cad0: %s\n", result ? result : "No encontrado");

    // Localizar la cadena "Guatemala" dentro de cad0
    result = strstr(cad0, "Guatemala");
    printf("\nPrueba de la función strstr. Se trata de localizar la cadena Guatemala dentro de cad0: %s\n", result ? result : "No encontrado");

    return 0;  // Salida del programa
}
