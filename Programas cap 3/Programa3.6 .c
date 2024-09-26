#include <stdio.h>
// Se incluye la biblioteca estándar de entrada/salida.

/* Nómina de profesores.
   El programa, al recibir como datos los salarios de los profesores de una
   universidad, obtiene la nómina y el promedio de los salarios. 
   I: variable de tipo entero.
   SAL, NOM y PRO: variables de tipo real. */

void main(void)
// Definición de la función principal del programa.
{
    int I = 0;
    // Se declara la variable I de tipo entero, que llevará el conteo de los profesores. Se inicializa en 0.

    float SAL, PRO, NOM = 0;
    // Se declaran tres variables de tipo float:
    // SAL almacenará el salario de cada profesor.
    // NOM es el acumulador de la nómina total y se inicializa en 0.
    // PRO almacenará el promedio de los salarios.

    printf("Ingrese el salario del profesor:\t");
    // Se solicita al usuario que ingrese el salario del primer profesor.

    /* Observa que al menos se necesita ingresar el salario de un profesor para que
    no ocurra un error de ejecución del programa. */
    scanf("%f", &SAL);
    // Se lee el valor ingresado del salario y se almacena en SAL.

    do
    // El ciclo do-while asegura que al menos una vez se ejecute.
    {
        NOM = NOM + SAL;
        // Se suma el salario actual (SAL) al acumulador de la nómina (NOM).

        I = I + 1;
        // Se incrementa el contador de profesores (I).

        printf("Ingrese el salario del profesor -0 para terminar- :\t");
        // Se solicita el siguiente salario.

        scanf("%f", &SAL);
        // Se lee el nuevo salario ingresado.
    }
    while (SAL);
    // El ciclo se repite mientras el valor de SAL sea diferente de 0.

    PRO = NOM / I;
    // Se calcula el promedio dividiendo la nómina total (NOM) entre el número de profesores (I).

    printf("\nNómina: %.2f \t Promedio de salarios: %.2f", NOM, PRO);
    // Se imprime la nómina total y el promedio de los salarios.
}
