#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Estructuras-3.
El programa muestra la manera en que se declara una estructura anidada, así
como la forma de acceso a los campos de las variables o apuntadores de tipo
estructura, tanto para lectura como para escritura. Se utiliza además una
función que recibe como parámetro un apuntador de tipo estructura. */

typedef struct /* Declaración de la estructura domicilio utilizando un typedef. */
{
    char calle[20];
    int numero;
    int cp;
    char localidad[20];
} domicilio;

struct empleado /* Declaración de la estructura anidada empleado. */
{
    char nombre[20];
    char departamento[20];
    float sueldo;
    domicilio direccion; /* direccion es un campo de tipo estructura domicilio */
};

void Lectura(struct empleado *a) 
{
    /* Función para leer los campos de un apuntador de tipo estructura empleado */
    printf("\nIngrese el nombre del empleado: ");
    gets(a->nombre);
    fflush(stdin);

    printf("Ingrese el departamento de la empresa: ");
    gets(a->departamento);

    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &a->sueldo);
    fflush(stdin);

    printf("—-Ingrese la dirección del empleado—-\n");

    printf("\tCalle: ");
    gets(a->direccion.calle);

    printf("\tNúmero: ");
    scanf("%d", &a->direccion.numero);

    printf("\tCódigo Postal: ");
    scanf("%d", &a->direccion.cp);
    fflush(stdin);

    printf("\tLocalidad: ");
    gets(a->direccion.localidad);
}

int main(void)
{
    struct empleado e0 = {"Arturo", "Compras", 15500.75, {"San Jerónimo", 120, 3490, "Toluca"}};
    struct empleado *e1, *e2, e3, e4;

    /* Asignación de memoria para el apuntador e1 */
    e1 = (struct empleado *)malloc(sizeof(struct empleado));
    if (e1 == NULL) {
        printf("Error al asignar memoria para e1.\n");
        return 1;
    }

    /* Lectura de datos para e1 */
    printf("\nIngrese el nombre del empleado 1: ");
    scanf("%s", e1->nombre); // Use %s para cadenas y quité el & ya que e1->nombre ya es un puntero
    fflush(stdin);

    printf("Ingrese el departamento de la empresa: ");
    gets(e1->departamento);

    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e1->sueldo);
    fflush(stdin);

    printf("—-Ingrese la dirección del empleado—-\n");

    printf("\tCalle: ");
    gets(e1->direccion.calle);

    printf("\tNúmero: ");
    scanf("%d", &e1->direccion.numero);

    printf("\tCódigo Postal: ");
    scanf("%d", &e1->direccion.cp);
    fflush(stdin);

    printf("\tLocalidad: ");
    gets(e1->direccion.localidad);

    /* Lectura de datos para e3 */
    printf("\nIngrese el nombre del empleado 3: ");
    scanf("%s", e3.nombre);
    fflush(stdin);

    printf("Ingrese el departamento de la empresa: ");
    gets(e3.departamento);

    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e3.sueldo);
    fflush(stdin);

    printf("—-Ingrese la dirección del empleado—-\n");

    printf("\tCalle: ");
    gets(e3.direccion.calle);

    printf("\tNúmero: ");
    scanf("%d", &e3.direccion.numero);

    printf("\tCódigo Postal: ");
    scanf("%d", &e3.direccion.cp);
    fflush(stdin);

    printf("\tLocalidad: ");
    gets(e3.direccion.localidad);

    /* Liberar memoria asignada dinámicamente */
    free(e1);
    return 0;
}
