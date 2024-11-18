#include <stdio.h>

/* Alumnos.
   El programa permite modificar el promedio de un alumno almacenado en un archivo binario. */

typedef struct /* Declaración de la estructura alumno. */
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void modifica(FILE *); /* Prototipo de función. */

int main(void)
{
    FILE *ar;

    if ((ar = fopen("ad1.dat", "r+b")) != NULL) /* Apertura en modo lectura y escritura binaria. */
    {
        modifica(ar);  /* Llama a la función para modificar el registro. */
        fclose(ar);     /* Cierra el archivo después de la modificación. */
    }
    else
    {
        printf("\nEl archivo no se puede abrir\n");
    }

    return 0;
}

void modifica(FILE *ap)
/* Esta función se utiliza para modificar el promedio de un alumno. */
{
    int d;
    alumno alu;

    printf("\nIngrese el número de registro que desea modificar: ");
    /* Nota: El primer registro está en la posición 0, así que el usuario debe introducir (n-1) */
    scanf("%d", &d);

    fseek(ap, (d - 1) * sizeof(alumno), SEEK_SET);
    /* Posiciona el puntero en el registro correspondiente:
       (d-1) * tamaño de la estructura alumno, a partir del inicio del archivo (SEEK_SET). */

    if (fread(&alu, sizeof(alumno), 1, ap) == 1) /* Verifica si la lectura fue exitosa. */
    {
        printf("\nRegistro actual:");
        printf("\nMatrícula: %d", alu.matricula);
        printf("\nNombre: %s", alu.nombre);
        printf("\nCarrera: %d", alu.carrera);
        printf("\nPromedio actual: %.2f", alu.promedio);

        printf("\n\nIngrese el promedio correcto del alumno: ");
        scanf("%f", &alu.promedio);

        fseek(ap, (d - 1) * sizeof(alumno), SEEK_SET);
        /* Posiciona el puntero nuevamente en el registro para escribir el dato actualizado. */
        fwrite(&alu, sizeof(alumno), 1, ap); /* Escribe el registro modificado. */

        printf("\nEl promedio se actualizó correctamente.\n");
    }
    else
    {
        printf("\nNo se pudo leer el registro. Verifique el número ingresado.\n");
    }
}
