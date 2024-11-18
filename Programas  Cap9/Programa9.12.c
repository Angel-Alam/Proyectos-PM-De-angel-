#include <stdio.h>
/* Incorpora caracteres.
   El programa agrega caracteres al archivo libro.txt. */
void main(void)
{
    char p1;
    FILE *ar;

    ar = fopen("libro.txt", "a");  // Se abre el archivo con la opción para agregar caracteres.
    
    if (ar != NULL)
    {
        while ((p1 = getchar()) != '\n')  // Lee los caracteres hasta que se presiona Enter.
        {
            fputc(p1, ar);  // Escribe cada carácter en el archivo.
        }
        fclose(ar);  // Cierra el archivo.
    }
    else
    {
        printf("No se puede abrir el archivo\n");
    }
}
