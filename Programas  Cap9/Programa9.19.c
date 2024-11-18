#include <stdio.h>

/* Mezcla.
El programa mezcla, respetando el orden, dos archivos que se encuentran
ordenados en forma ascendente considerando la matrícula de los alumnos. */

void mezcla(FILE *, FILE *, FILE *); /* Prototipo de función. */

void main(void)
{
    FILE *ar, *ar1, *ar2;
    
    ar = fopen("arc9.dat", "r");   /* Se abre el archivo arc9.dat para lectura. */
    ar1 = fopen("arc10.dat", "r"); /* Se abre el archivo arc10.dat para lectura. */
    ar2 = fopen("arc11.dat", "w"); /* Se abre el archivo arc11.dat para escritura. */
    
    if ((ar != NULL) && (ar1 != NULL) && (ar2 != NULL))
    {
        mezcla(ar, ar1, ar2);  /* Llamada a la función mezcla para combinar los archivos. */
        fclose(ar);
        fclose(ar1);
        fclose(ar2);
    }
    else
    {
        printf("No se pueden abrir los archivos\n");
    }
}

void mezcla(FILE *ar, FILE *ar1, FILE *ar2)
{
    int i, mat, mat1;
    float ca[3], ca1[3], cal;
    int b = 1, b1 = 1;  /* Inicializamos las banderas */

    while (((!feof(ar)) || !b) && ((!feof(ar1)) || !b1))
    {
        if (b)  /* Si b está encendido, leemos del archivo ar */
        {
            if (fscanf(ar, "%d", &mat) == 1) 
            {
                for (i = 0; i < 3; i++)
                    fscanf(ar, "%f", &ca[i]);
                b = 0;  /* Desactivamos la bandera b */
            }
        }
        
        if (b1)  /* Si b1 está encendido, leemos del archivo ar1 */
        {
            if (fscanf(ar1, "%d", &mat1) == 1)
            {
                for (i = 0; i < 3; i++)
                    fscanf(ar1, "%f", &ca1[i]);
                b1 = 0;  /* Desactivamos la bandera b1 */
            }
        }
        
        if (mat < mat1)
        {
            fprintf(ar2, "%d\t", mat);
            for (i = 0; i < 3; i++)
                fprintf(ar2, "%f\t", ca[i]);
            fputs("\n", ar2);
            b = 1;  /* Leemos del archivo ar nuevamente */
        }
        else
        {
            fprintf(ar2, "%d\t", mat1);
            for (i = 0; i < 3; i++)
                fprintf(ar2, "%f\t", ca1[i]);
            fputs("\n", ar2);
            b1 = 1;  /* Leemos del archivo ar1 nuevamente */
        }
    }

    /* Escribimos el resto de los alumnos si alguno de los archivos se agotó */
    if (!b)
    {
        fprintf(ar2, "%d\t", mat);
        for (i = 0; i < 3; i++)
            fprintf(ar2, "%f\t", ca[i]);
        fputs("\n", ar2);
        
        while (fscanf(ar, "%d", &mat) == 1) 
        {
            fprintf(ar2, "%d\t", mat);
            for (i = 0; i < 3; i++)
            {
                fscanf(ar, "%f", &cal);
                fprintf(ar2, "%f\t", cal);
            }
            fputs("\n", ar2);
        }
    }

    if (!b1)
    {
        fprintf(ar2, "%d\t", mat1);
        for (i = 0; i < 3; i++)
            fprintf(ar2, "%f\t", ca1[i]);
        fputs("\n", ar2);
        
        while (fscanf(ar1, "%d", &mat1) == 1)
        {
            fprintf(ar2, "%d\t", mat1);
            for (i = 0; i < 3; i++)
            {
                fscanf(ar1, "%f", &cal);
                fprintf(ar2, "%f\t", cal);
            }
            fputs("\n", ar2);
        }
    }
}
