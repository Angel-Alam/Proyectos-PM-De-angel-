#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Estructuras-2.
El programa muestra la manera en que se declara una estructura, así como la
forma en que se tiene acceso a los campos de los apuntadores de tipo estructura
tanto para lectura como para escritura. Se utiliza además una función que
recibe como parámetro un apuntador de tipo estructura. */

struct alumno /* Declaración de la estructura. */
{
    int matricula;
    char nombre[20];
    char carrera[20]; /* Campos de la estructura alumno. */
    float promedio;
    char direccion[20];
};

void Lectura(struct alumno *); /* Prototipo de función. */

int main(void)
{
    struct alumno a0 = {120, "María", "Contabilidad", 8.9, "Querétaro"};
    struct alumno *a3, *a4, *a5, a6;

    /* Asignación de la dirección de a0 al apuntador a3 */
    a3 = &a0;

    /* Asignación de memoria para los apuntadores de tipo estructura */
    a4 = (struct alumno *)malloc(sizeof(struct alumno));
    if (a4 == NULL) {
        printf("Error al asignar memoria para a4.\n");
        return 1;
    }

    /* Lectura de los campos de a4 */
    printf("\nIngrese la matrícula del alumno 4: ");
    scanf("%d", &(*a4).matricula);
    fflush(stdin);

    printf("Ingrese el nombre del alumno 4: ");
    gets(a4->nombre);

    printf("Ingrese la carrera del alumno 4: ");
    gets((*a4).carrera);

    printf("Ingrese el promedio del alumno 4: ");
    scanf("%f", &a4->promedio);
    fflush(stdin);

    printf("Ingrese la dirección del alumno 4: ");
    gets(a4->direccion);

    /* Asignación de memoria para a5 */
    a5 = (struct alumno *)malloc(sizeof(struct alumno));
    if (a5 == NULL) {
        printf("Error al asignar memoria para a5.\n");
        free(a4); /* Liberar memoria previamente asignada antes de salir */
        return 1;
    }

    /* Llamada a la función Lectura para a5 y a6 */
    Lectura(a5);
    Lectura(&a6);

    /* Imprimir los datos del alumno 3 (que apunta a a0) */
    printf("\nDatos del alumno 3\n");
    printf("Matrícula: %d\n", a3->matricula);
    printf("Nombre: %s\n", a3->nombre);
    printf("Carrera: %s\n", a3->carrera);
    printf("Promedio: %.2f\n", a3->promedio);
    printf("Dirección: %s\n", a3->direccion);

    /* Liberar la memoria asignada dinámicamente */
    free(a4);
    free(a5);

    return 0;
}

/* Definición de la función Lectura */
void Lectura(struct alumno *a)
{
    printf("\nIngrese la matrícula: ");
    scanf("%d", &a->matricula);
    fflush(stdin);

    printf("Ingrese el nombre: ");
    gets(a->nombre);

    printf("Ingrese la carrera: ");
    gets(a->carrera);

    printf("Ingrese el promedio: ");
    scanf("%f", &a->promedio);
    fflush(stdin);

    printf("Ingrese la dirección: ");
    gets(a->direccion);
}
