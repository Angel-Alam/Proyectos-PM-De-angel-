#include <stdio.h>
#include <stdlib.h> // Para uso de exit

/* Declaración de cadenas de caracteres y asignación de valores. */
int main(void) {
    // Declaración de un apuntador y asignación de una cadena literal
    char *cad0;
    cad0 = "Argentina"; // Asignación correcta
    puts(cad0); // Imprime "Argentina"

    // Modificación del apuntador para que apunte a otra cadena
    cad0 = "Brasil"; // Cambio correcto
    puts(cad0); // Imprime "Brasil"

    // Declaración de un apuntador sin inicializar
    char cad1[100]; // Reservamos espacio para 100 caracteres
    printf("Ingrese una cadena para cad1: ");
    fgets(cad1, sizeof(cad1), stdin); // Leer una cadena con fgets (más seguro que gets)
    puts(cad1); // Imprime la cadena ingresada

    // Ejemplo de cómo declarar y usar un arreglo de caracteres (cadena)
    char cad2[20] = "México"; // Declaración y asignación de cadena
    puts(cad2); // Imprime "México"

    printf("Ingrese una nueva cadena para cad2: ");
    fgets(cad2, sizeof(cad2), stdin); // Lee una nueva cadena para cad2
    puts(cad2); // Imprime la cadena ingresada

    // No se puede asignar una cadena a una posición específica de un arreglo
    // Esto produce un error: cad2[10] = "Guatemala"; 
    // En cambio, puedes copiar la cadena en cad2 de la siguiente manera:
    char cad3[] = "Guatemala"; // Crear otra cadena
    snprintf(cad2, sizeof(cad2), "%s", cad3); // Copiar la cadena
    puts(cad2); // Imprime "Guatemala"

    return 0; // Salida del programa
}
