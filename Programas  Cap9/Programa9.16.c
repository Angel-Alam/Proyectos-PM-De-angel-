#include <stdio.h>
#include <stdlib.h>

/* Suma reales.
El programa lee cadenas de caracteres de un archivo, detecta aquellas que
comienzan con números, los suma y calcula el promedio de los mismos. */

void sumypro(FILE *); /* Prototipo de función. */

void main(void)
{
    FILE *ap;
    if ((ap = fopen("arc2.txt", "r")) != NULL)  /* Abrimos el archivo en modo lectura. */
    {
        sumypro(ap);  /* Llamamos a la función sumypro para procesar el archivo. */
        fclose(ap);   /* Cerramos el archivo después de procesarlo. */
    }
    else
        printf("No se puede abrir el archivo\n");  /* Mensaje de error si el archivo no se puede abrir. */
}

void sumypro(FILE *ap1)
/* Esta función lee cadenas de caracteres de un archivo, detecta aquellas
que comienzan con números, y obtiene la suma y el promedio de dichos
números. */
{
    char cad[30];
    int i = 0;
    float sum = 0.0, r;

    // Leemos el archivo línea por línea
    while (fgets(cad, 30, ap1) != NULL)
    {
        r = atof(cad);  /* Convertimos la cadena leída en un número real. */
        
        // Si la conversión a número no da cero (es decir, si comienza con un número)
        if (r)
        {
            i++;        /* Aumentamos el contador de números válidos. */
            sum += r;   /* Sumamos el número leído. */
        }
    }

    printf("\nSuma: %.2f", sum);
    if (i > 0)  /* Si se han encontrado números, calculamos el promedio. */
        printf("\nPromedio: %.2f", sum / i);
    else
        printf("\nNo se encontraron números válidos en el archivo.");
}
