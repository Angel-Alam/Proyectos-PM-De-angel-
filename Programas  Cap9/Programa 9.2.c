#include <stdio.h>

/* Archivos y caracteres.
   El programa lee caracteres de un archivo. */

int main(void)
{
    char p1;
    FILE *ar;

    // Intentamos abrir el archivo para lectura
    if ((ar = fopen("arc.txt", "r")) != NULL)
    {
        // Lee y despliega cada carácter hasta el fin del archivo
        while ((p1 = fgetc(ar)) != EOF) 
        {
            putchar(p1); // Despliega el carácter en la pantalla
        }

        fclose(ar); // Cierra el archivo
    }
    else
    {
        printf("No se puede abrir el archivo\n");
    }

    return 0;
}
