#include <stdio.h>
/* Cuenta caracteres.
   El programa, al recibir como dato un archivo de texto y un caracter, cuenta
   el número de veces que se encuentra el caracter en el archivo. */

int cuenta(char); /* Prototipo de función. */

void main(void)
{
    int res;
    char car;
    printf("\nIngrese el caracter que se va a buscar en el archivo: ");
    car = getchar();  // Lee el caracter que el usuario desea buscar
    res = cuenta(car);
    
    if (res != -1)
        printf("\n\nEl caracter '%c' se encuentra en el archivo %d veces", car, res);
    else
        printf("No se pudo abrir el archivo\n");
}

int cuenta(char car)
/* Esta función determina cuántas veces se encuentra el caracter en el
   archivo. */
{
    int res = 0, con = 0;
    char p;
    FILE *ar;
    
    if ((ar = fopen("arc.txt", "r")) != NULL)  /* Se abre el archivo para lectura. */
    {
        while ((p = fgetc(ar)) != EOF)  /* Se lee cada caracter del archivo hasta EOF. */
        {
            if (p == car)  /* Si el caracter leído es igual al buscado, incrementar el contador. */
                con++;
        }
        fclose(ar);  /* Cierra el archivo. */
        res = con;   /* Asigna el número de veces que se encontró el caracter. */
    }
    else
    {
        res = -1;  /* Retorna -1 si no se pudo abrir el archivo. */
    }
    
    return res;
}
