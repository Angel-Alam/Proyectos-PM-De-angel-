#include <stdio.h>
// Se incluye la biblioteca estándar de entrada/salida.

/* Factorial.
   El programa calcula el factorial de un número entero. 
   FAC, I, NUM: variables de tipo entero. */

void main(void)
// Definición de la función principal del programa.
{
    int I, NUM;
    // Se declaran las variables enteras I (contador) y NUM (número cuyo factorial se va a calcular).

    long FAC;
    // Se declara la variable FAC de tipo long para almacenar el resultado del factorial.

    printf("\nIngrese un número entero: ");
    // Se solicita al usuario que ingrese un número entero.

    scanf("%d", &NUM);
    // Se lee el valor ingresado por el usuario y se almacena en NUM.

    if (NUM >= 0)
    // Se verifica que el número ingresado sea mayor o igual a 0, ya que el factorial no está definido para números negativos.
    {
        FAC = 1;
        // Inicializamos FAC en 1, porque el factorial de 0 es 1, y también para la multiplicación sucesiva.

        for (I = 1; I <= NUM; I++)
        // Ciclo for que va desde 1 hasta el valor de NUM, calculando el factorial.
        {
            FAC *= I;
            // En cada iteración se multiplica FAC por el valor de I.
        }

        printf("\nEl factorial de %d es: %ld", NUM, FAC);
        // Se imprime el resultado del factorial.
    }
    else
    {
        printf("\nError: El número ingresado es negativo.");
        // Si el número es negativo, se muestra un mensaje de error.
    }
}
