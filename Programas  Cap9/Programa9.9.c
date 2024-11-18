#include <stdio.h>

/* Alumnos.
   El programa lee bloques (variables de tipo estructura alumno) de un archivo
   de acceso directo. */

typedef struct { /* Declaración de la estructura alumno. */
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void lee(FILE *); /* Prototipo de función. */

int main(void)
{
    FILE *ar;

    if ((ar = fopen("ad1.dat", "rb")) != NULL) /* Apertura en modo binario lectura. */
    {
        lee(ar);  /* Llama a la función para leer los datos. */
        fclose(ar); /* Cierra el archivo después de leer. */
    }
    else
    {
        printf("\nEl archivo no se puede abrir\n");
    }

    return 0;
}

void lee(FILE *ap)
/* Esta función se utiliza para leer bloques de un archivo de acceso directo. */
{
    alumno alu;

    /* Primera lectura para inicializar el ciclo */
    fread(&alu, sizeof(alumno), 1, ap);

    /* Leer el archivo mientras no sea el final */
    while (!feof(ap))
    {
        printf("\nMatrícula: %d", alu.matricula);
        printf("\tCarrera: %d", alu.carrera);
        printf("\tPromedio: %.2f\t", alu.promedio);
        puts(alu.nombre); /* Imprime el nombre del alumno. */

        fread(&alu, sizeof(alumno), 1, ap); /* Lee el siguiente registro. */
    }
}
