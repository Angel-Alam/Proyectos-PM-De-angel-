#include <stdio.h>
#include <string.h>

int longitud(char *cad); /* Prototipo de función. */

void main(void)
{
    int i, n, l = -1, p = 0, t;
    char cad[50], FRA[20][50];

    printf("\nIngrese el número de filas del arreglo: ");
    scanf("%d", &n);
    getchar();  // Limpiar el búfer de entrada después de `scanf`

    for (i = 0; i < n; i++)
    {
        printf("Ingrese la línea %d de texto. Máximo 50 caracteres: ", i + 1);
        fgets(FRA[i], sizeof(FRA[i]), stdin);
        FRA[i][strcspn(FRA[i], "\n")] = '\0';  // Eliminar el salto de línea al final
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        strcpy(cad, FRA[i]);
        t = longitud(cad);
        if (t > l)
        {
            l = t;
            p = i;
        }
    }

    printf("\nLa cadena con mayor longitud es: ");
    puts(FRA[p]);
    printf("Longitud: %d\n", l);
}

int longitud(char *cadena)
/* Esta función calcula la longitud de la cadena. */
{
    int cue = 0;
    while (cadena[cue] != '\0')  // Arreglar la comparación
    {
        cue++;
    }
    return cue;
}
