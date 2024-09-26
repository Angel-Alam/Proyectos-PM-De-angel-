#include <stdio.h>
// Se incluye la biblioteca estándar de entrada/salida.

 /* Suma pagos.
 El programa obtiene la suma de los pagos realizados el último mes.
 PAG y SPA: variables de tipo real.*/

void main(void)
// Definición de la función principal del programa.
{
    float PAG, SPA = 0;
    // Se declaran dos variables de tipo float: 
    // PAG para almacenar los pagos ingresados por el usuario,
    // SPA se inicializa en 0 y acumulará la suma de los pagos.

    printf("Ingrese el primer pago:\t");
    // Se solicita al usuario que ingrese el primer pago.

    scanf("%f", &PAG);
    // Se lee el valor ingresado por el usuario y se almacena en la variable PAG.

    /* Observa que al utilizar la estructura do-while al menos se necesita un pago. */
    do
    // El ciclo do-while asegura que se ejecute al menos una vez.
    {
        SPA = SPA + PAG;
        // Se suma el valor de PAG al acumulador SPA.

        printf("Ingrese el siguiente pago  -0 para terminar-:\t ");
        // Se solicita al usuario que ingrese el siguiente pago.

        scanf("%f", &PAG);
        // Se lee el nuevo valor de PAG, que determinará si el ciclo continúa.
    }
    while (PAG);
    // El ciclo se repetirá mientras PAG sea diferente de 0.

    printf("\nEl total de pagos del mes es: %.2f", SPA);
    // Una vez que el ciclo termina, se imprime el total acumulado de pagos en SPA.
}
