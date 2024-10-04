//Nota no pude presentarlo en clase debido a que estan trabajando con un taladro en mi casa
//y no se escuchaba practimente nada, si necesita pruebas se le puede enviar
//
//
#include <stdio.h>
//Entrada 1 consumoMIN L/100km
//Entrada 2 ConsumoMAX L/100km
//Entrada 3 Costo del gal 

int main() {
    float CMIN, CMAX, PRECIO, galprecio;

    // Entrada de datos
    printf("Ingrese el consumo minimo (L/100km): ");
    scanf("%f", &CMIN);
    printf("Ingrese el consumo maximo (L/100km): ");
    scanf("%f", &CMAX);
    printf("Ingrese el precio del galon: ");
    scanf("%f", &PRECIO);

    // Validación
    if (CMIN > CMAX) {
        printf("El consumo minimo no puede ser mayor que el maximo.\n");
        return 1; // Finaliza el programa si la validación falla
    } else {
        // Si el consumo es válido, se procede a imprimir la tabla
        printf("\n| Consumo (L/100km) | Precio gal/km (Pesos) |\n");

        for (float I = CMIN; I <= CMAX; I++) {
            galprecio = (I / 100) * (PRECIO / 3.785); // Convertir galón a litros
            printf("| %18.2f | %21.2f |\n", I, galprecio);
        }
    }
    
    return 0; 
}
