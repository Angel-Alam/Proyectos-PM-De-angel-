#include <stdio.h>

void convertir(int num) {
    char *unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    char *decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    char *especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
    char *centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};
    
    if (num == 100) printf("cien");
    else {
        printf("%s ", centenas[num / 100]); // Centenas
        int resto = num % 100;
        if (resto >= 10 && resto < 20) {
            printf("%s", especiales[resto - 10]); // Números del 10 al 19
        } else {
            printf("%s", decenas[resto / 10]);  // Decenas
            if (resto % 10 != 0) {
                printf(" y %s", unidades[resto % 10]); // Unidades
            }
        }
    }
}

int main() {
    float cantidad;
    int parte_entera, centavos;
    char repetir;

    do {
        printf("Ingrese la cantidad (ej. 150.10): ");
        scanf("%f", &cantidad);

        parte_entera = (int)cantidad;               // Parte entera del número
        centavos = (int)((cantidad - parte_entera) * 100);  // Centavos

        printf("Número en letras: ");
        convertir(parte_entera);
        printf(" con %d centavos\n", centavos);

        printf("¿Repetir? (s/n): ");
        scanf(" %c", &repetir);
    } while(repetir == 's');

    return 0;
}
