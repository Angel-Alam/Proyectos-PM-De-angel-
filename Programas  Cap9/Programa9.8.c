#include <stdio.h>
#include <string.h>

/* Alumnos.
   El programa almacena variables de tipo estructura alumno en un archivo. */

typedef struct /* Declaración de la estructura alumno. */
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void escribe(FILE *); /* Prototipo de función. */

int main(void)
{
    FILE *ar;

    if ((ar = fopen("ad1.dat", "wb")) != NULL) /* Apertura en modo binario escritura. */
    {
        escribe(ar); /* Llama a la función para escribir los datos de los alumnos. */
        fclose(ar);  /* Cierra el archivo solo si fue abierto correctamente. */
    }
    else
    {
        printf("\nEl archivo no se puede abrir\n");
    }

    return 0;
}

void escribe(FILE *ap)
/* Esta función sirve para leer los datos de los alumnos utilizando una
   estructura tipo alumno, que se almacenará posteriormente en un archivo. */
{
    alumno alu;
    int i = 0, r;

    printf("\n¿Desea ingresar información sobre alumnos? (Sí-1 No-0): ");
    scanf("%d", &r);

    while (r)
    {
        i++;
        printf("Matrícula del alumno %d: ", i);
        scanf("%d", &alu.matricula);

        printf("Nombre del alumno %d: ", i);
        scanf(" %[^\n]", alu.nombre); /* Lee cadenas con espacios de forma segura. */

        printf("Carrera del alumno %d (número): ", i);
        scanf("%d", &alu.carrera);

        printf("Promedio del alumno %d: ", i);
        scanf("%f", &alu.promedio);

        fwrite(&alu, sizeof(alumno), 1, ap); /* Almacena los datos de la estructura en el archivo. */

        printf("\n¿Desea ingresar información sobre más alumnos? (Sí-1 No-0): ");
        scanf("%d", &r);
    }
}
