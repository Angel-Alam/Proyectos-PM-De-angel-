#include <stdio.h>

/* Archivos con variables enteras y reales. 
   El programa lee información de los alumnos de una escuela, almacenada en un archivo.
   Utiliza una función para realizar la lectura, pero el archivo se abre y cierra desde el programa principal. */

void promedio(FILE *ar1); /* Prototipo de función. Se pasa un archivo como parámetro. */

int main(void)
{
    FILE *ar;

    if ((ar = fopen("arc9.txt", "r")) != NULL)
    {
        promedio(ar); /* Se llama a la función promedio. Se pasa el archivo como parámetro. */
        fclose(ar);   /* Se cierra el archivo después de terminar. */
    }
    else
    {
        printf("No se puede abrir el archivo.\n");
    }

    return 0;
}

/* Esta función lee los datos de los alumnos desde un archivo e imprime 
   tanto la matrícula como el promedio de cada alumno. */
void promedio(FILE *ar1)
{
    int i, j, n, mat;
    float pro, cal;

    fscanf(ar1, "%d", &n); /* Se lee el número de alumnos. */

    for (i = 0; i < n; i++)
    {
        fscanf(ar1, "%d", &mat); /* Se lee la matrícula de cada alumno. */
        printf("Matrícula: %d\t", mat);

        pro = 0; /* Inicialización del promedio. */
        for (j = 0; j < 5; j++)
        {
            fscanf(ar1, "%f", &cal); /* Se leen las cinco calificaciones. */
            pro += cal;              /* Se suma la calificación al promedio acumulado. */
        }

        printf("Promedio: %.2f\n", pro / 5); /* Se calcula e imprime el promedio. */
    }
}
