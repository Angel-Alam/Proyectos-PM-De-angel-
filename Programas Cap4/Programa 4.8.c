#include <stdio.h>

/* Combinación de variables globales y locales, y parámetros por valor y por referencia. */
int a, b, c, d;  /* Variables globales. */

void funcion1(int *, int *);  /* Prototipo de función con parámetros por referencia. */
int funcion2(int, int *);     /* Prototipo de función con un parámetro por valor y otro por referencia. */

int main(void) {
    int a;  /* Nota que `a` es una variable local. */
    a = 1;  /* Se asigna un valor a la variable local `a`. */
    b = 2;  /* Se asignan valores a las variables globales `b`, `c` y `d`. */
    c = 3;
    d = 4;
    
    printf("\n%d %d %d %d", a, b, c, d);  /* Imprime los valores iniciales. */
    
    funcion1(&b, &c);  /* Llamada a funcion1 con parámetros por referencia. */
    printf("\n%d %d %d %d", a, b, c, d);  /* Imprime los valores después de funcion1. */
    
    a = funcion2(c, &d);  /* Llamada a funcion2 con un parámetro por valor y otro por referencia. */
    printf("\n%d %d %d %d", a, b, c, d);  /* Imprime los valores después de funcion2. */
    
    return 0;
}

void funcion1(int *b, int *c) {
    int d;
    a = 5;  /* Se hace referencia a la variable global `a`. */
    d = 3;  /* Nota que se hace referencia a la variable local `d`. */
    
    (*b)++;    /* Incrementa la variable global `b` por referencia. */
    (*c) += 2; /* Incrementa la variable global `c` por referencia. */
    
    printf("\n%d %d %d %d", a, *b, *c, d);  /* Imprime los valores dentro de funcion1. */
}

int funcion2(int c, int *d) {
    int b;
    a++;  /* Incrementa la variable global `a`. */
    b = 7;
    c += 3;    /* Modifica la copia local de `c`. */
    (*d) += 2; /* Modifica la variable global `d` por referencia. */
    
    printf("\n%d %d %d %d", a, b, c, *d);  /* Imprime los valores dentro de funcion2. */
    
    return c;  /* Retorna el valor de la copia local de `c`. */
}
