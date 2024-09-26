#include <stdio.h> 

 /* Suma pagos.
 El programa, al recibir como datos un conjunto de pagos realizados en el último
 mes, obtiene la suma de los mismos.
 PAG y SPA: variables de tipo real.   */

void main(void)
// Declaración de la función principal del programa.
{
    float PAG, SPA;
    // Se declaran dos variables de tipo flotante: PAG para almacenar cada pago,
    // y SPA para acumular la suma total de los pagos.

    SPA = 0;
    // Se inicializa la variable SPA con 0, que es donde se acumularán los pagos.

    printf("Ingrese el primer pago:\t");
    // Se solicita al usuario que ingrese el primer pago.

    scanf("%f", &PAG);
    // Se lee el valor ingresado por el usuario y se almacena en la variable PAG.

    while (PAG)
    // Inicia un ciclo while que se repetirá mientras PAG no sea igual a 0.
    {
        SPA = SPA + PAG;
        // Se suma el valor de PAG a la variable SPA (acumulador).

        printf("Ingrese el siguiente pago:\t ");
        // Se solicita al usuario que ingrese el siguiente pago.

        scanf("%f", &PAG);
        // Se lee el nuevo valor de PAG que determinará si el ciclo continúa o se detiene.
    }

    printf("\nEl total de pagos del mes es: %.2f", SPA);
    // Una vez que el ciclo termina, se imprime el total acumulado en SPA.
}
