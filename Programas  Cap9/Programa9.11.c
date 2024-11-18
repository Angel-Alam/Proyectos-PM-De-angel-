#include <stdio.h>

/* Incrementa salarios.
   El programa incrementa el salario de los empleados de una empresa
   si sus ventas anuales son superiores al millón de pesos. */

typedef struct /* Declaración de la estructura empleado. */
{
    int clave;
    int departamento;
    float salario;
    float ventas[12];
} empleado;

void incrementa(FILE *); /* Prototipo de función. */

int main(void)
{
    FILE *ar;

    // Se abre el archivo en modo lectura y escritura binaria
    if ((ar = fopen("ad5.dat", "r+b")) != NULL) 
    {
        incrementa(ar);
        fclose(ar); /* Se cierra el archivo después de actualizar los salarios. */
    }
    else
    {
        printf("\nEl archivo no se puede abrir\n");
    }

    return 0;
}

void incrementa(FILE *ap)
/* Esta función se utiliza para incrementar el salario de los empleados 
   que han tenido ventas anuales superiores a $1,000,000. */
{
    int i, j;
    float sum;
    empleado emple;

    // Leer el primer registro del archivo
    fread(&emple, sizeof(empleado), 1, ap); 

    // Mientras no lleguemos al final del archivo
    while (!feof(ap))
    {
        sum = 0;

        // Sumar las ventas del empleado
        for (j = 0; j < 12; j++) 
        {
            sum += emple.ventas[j];
        }

        // Si las ventas superan el millón de pesos, incrementar el salario
        if (sum > 1000000)
        {
            emple.salario *= 1.10; /* Incrementar el salario en un 10% */

            // Nos posicionamos al inicio del registro para sobrescribirlo
            fseek(ap, -sizeof(empleado), SEEK_CUR);
            fwrite(&emple, sizeof(empleado), 1, ap);

            // Volver al siguiente registro
            fseek(ap, sizeof(empleado), SEEK_CUR);
        }
        else
        {
            // Volver al siguiente registro si no se cumple la condición
            fseek(ap, sizeof(empleado), SEEK_CUR);
        }

        // Leer el siguiente registro
        fread(&emple, sizeof(empleado), 1, ap);
    }
}
