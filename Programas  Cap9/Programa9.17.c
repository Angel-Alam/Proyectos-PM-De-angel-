#include <stdio.h>
#include <ctype.h>
#include <string.h>

/* Reemplaza palabras.
El programa lee cadenas de caracteres de un archivo y cada vez que
encuentra la palabra México escrita incorrectamente (con minúscula) 
la reemplaza por su forma correcta y escribe la cadena en otro archivo. */

void cambia(FILE *, FILE *); /* Prototipo de función. Se pasan dos archivos como parámetros. */

void main(void)
{
    FILE *ar;
    FILE *ap;

    ar = fopen("arc.txt", "r");  /* Se abre el archivo arc.txt para lectura. */
    ap = fopen("arc1.txt", "w"); /* Se abre el archivo arc1.txt para escritura. */

    if ((ar != NULL) && (ap != NULL))
    {
        cambia(ar, ap);  /* Llamada a la función que realiza el reemplazo. */
        fclose(ar);
        fclose(ap);
    }
    else
    {
        printf("No se pueden abrir los archivos\n");  /* Mensaje de error si los archivos no se pueden abrir. */
    }
}

void cambia(FILE *ap1, FILE *ap2)
{
    /* Esta función reemplaza la palabra 'méxico' escrita con minúsculas por su forma correcta 
       (con 'M' mayúscula) y escribe la cadena de caracteres en un nuevo archivo. */
    char cad[1000];  /* Cadena para almacenar una línea leída del archivo. */

    while (fgets(cad, sizeof(cad), ap1) != NULL)  /* Leemos el archivo línea por línea. */
    {
        char *cad2 = cad;
        
        /* Buscamos y reemplazamos todas las ocurrencias de 'méxico' */
        while ((cad2 = strstr(cad2, "méxico")) != NULL)
        {
            cad2[0] = 'M';  /* Reemplazamos la primera letra 'm' por 'M'. */
            cad2 += 6;  /* Avanzamos el puntero más allá de 'México' para continuar la búsqueda. */
        }

        fputs(cad, ap2);  /* Escribimos la línea modificada en el archivo de salida. */
    }
}
