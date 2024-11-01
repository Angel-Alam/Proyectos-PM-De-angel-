#include <stdio.h>
#include <string.h>

/* Uniones.
El programa muestra la manera como se declara una unión, así como la forma de
acceso a los campos de las variables de tipo unión tanto para asignación
de valores como para lectura y escritura. */

union datos /* Declaración de una unión. */
{
    char celular[15];
    char correo[20];
};

typedef struct /* Declaración de una estructura utilizando typedef. */
{
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    union datos personales; /* Uno de los campos de la estructura alumno es una unión. */
} alumno;

void Lectura(alumno *a); /* Prototipo de función. */

int main(void)
{
    alumno a1 = {120, "María", "Contabilidad", 8.9, .personales.celular = "5-158-40-50"};
    alumno a2, a3;

    /* Los campos de a2 se leen en el programa principal */
    printf("Alumno 2\n");
    printf("Ingrese la matrícula: ");
    scanf("%d", &a2.matricula);
    fflush(stdin);
    printf("Ingrese el nombre: ");
    gets(a2.nombre);
    fflush(stdin);
    printf("Ingrese la carrera: ");
    gets(a2.carrera);
    printf("Ingrese el promedio: ");
    scanf("%f", &a2.promedio);
    fflush(stdin);
    printf("Ingrese el correo electrónico: ");
    gets(a2.personales.correo);

    /* Los campos de a3 reciben valores a través de una función */
    printf("Alumno 3\n");
    Lectura(&a3); /* Llamada a la función para leer los campos de la variable a3 */

    /* Impresión de resultados */
    printf("\nDatos del alumno 1\n");
    printf("%d\n", a1.matricula);
    puts(a1.nombre);
    puts(a1.carrera);
    printf("%.2f\n", a1.promedio);
    puts(a1.personales.celular); /* Escribe el valor del teléfono celular asignado */

    printf("\nDatos del alumno 2\n");
    printf("%d\n", a2.matricula);
    puts(a2.nombre);
    puts(a2.carrera);
    printf("%.2f\n", a2.promedio);
    puts(a2.personales.correo); /* Escribe el contenido del correo electrónico */

    printf("Ingrese el teléfono celular del alumno 2: ");
    fflush(stdin);
    gets(a2.personales.celular); /* Se asigna un nuevo valor al campo celular */
    puts(a2.personales.celular); /* Escribe el teléfono celular ingresado */
    puts(a2.personales.correo); /* Ahora escribe basura, ya que se sobrescribe la unión */

    printf("\nDatos del alumno 3\n");
    printf("%d\n", a3.matricula);
    puts(a3.nombre);
    puts(a3.carrera);
    printf("%.2f\n", a3.promedio);
    puts(a3.personales.celular);
    puts(a3.personales.correo); /* Escribe basura, ya que solo uno de los campos de la unión es válido */

    return 0;
}

void Lectura(alumno *a)
/* La función Lectura se utiliza para leer los campos de una variable de tipo
estructura alumno. */
{
    printf("\nIngrese la matrícula: ");
    scanf("%d", &(*a).matricula);
    fflush(stdin);
    printf("Ingrese el nombre: ");
    gets(a->nombre);
    fflush(stdin);
    printf("Ingrese la carrera: ");
    gets((*a).carrera);
    printf("Ingrese el promedio: ");
    scanf("%f", &a->promedio);
    printf("Ingrese el teléfono celular: ");
    fflush(stdin);
    gets(a->personales.celular);
}
