#include <stdio.h>
#include <ctype.h>

/* Letras minúsculas y mayúsculas.
El programa, al recibir como dato un archivo formado por cadenas de
caracteres, determina el número de letras minúsculas y mayúsculas que hay
en el archivo. */

void minymay(FILE *); /* Prototipo de función. */

void main(void)
{
    FILE *ap;
    if ((ap = fopen("arc.txt", "r")) != NULL)  /* Se abre el archivo en modo lectura. */
    {
        minymay(ap);  /* Llamamos a la función para contar las letras. */
        fclose(ap);  /* Cerramos el archivo después de procesarlo. */
    }
    else
        printf("No se puede abrir el archivo\n");  /* Mensaje de error si no se puede abrir el archivo. */
}

void minymay(FILE *ap1)
/* Esta función lee cadenas de caracteres del archivo y cuenta el número de letras
minúsculas y mayúsculas que existen en el archivo. */
{
    char cad[30];
    int i, mi = 0, ma = 0;

    // Mientras fgets lea correctamente una línea del archivo.
    while (fgets(cad, 30, ap1) != NULL)
    {
        i = 0;
        // Recorre cada carácter de la línea leída
        while (cad[i] != '\0')  /* Hasta el final de la cadena */
        {
            if (islower(cad[i]))  /* Si el carácter es una letra minúscula */
                mi++;
            else if (isupper(cad[i]))  /* Si el carácter es una letra mayúscula */
                ma++;
            i++;
        }
    }

    // Imprime el número total de letras minúsculas y mayúsculas encontradas.
    printf("\nNúmero de letras minúsculas: %d\n", mi);
    printf("Número de letras mayúsculas: %d\n", ma);
}
