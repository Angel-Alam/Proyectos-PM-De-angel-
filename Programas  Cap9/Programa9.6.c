#include <stdio.h>

/* El programa lee datos de alumnos almacenados en un archivo y escribe
   la matrícula y el promedio de cada alumno. */
int main(void)
{
    int i, j, n, mat;
    float cal, pro;
    FILE *ar;

    if ((ar = fopen("arc9.txt", "r")) != NULL)
    {
        fscanf(ar, "%d", &n); /* Se lee el número de alumnos. */

        for (i = 0; i < n; i++)
        {
            fscanf(ar, "%d", &mat); /* Se lee la matrícula de cada alumno. */
            printf("Matrícula: %d\t", mat);
            
            pro = 0; // Inicializar promedio en 0 para cada alumno

            for (j = 0; j < 5; j++)
            {
                fscanf(ar, "%f", &cal); /* Se leen las cinco calificaciones del alumno. */
                pro += cal; // Sumar las calificaciones
            }

            printf("Promedio: %.2f\n", pro / 5); /* Se imprime el promedio. */
        }

        fclose(ar); // Cerrar el archivo después de terminar
    }
    else
    {
        printf("No se puede abrir el archivo.\n");
    }

    return 0;
}
