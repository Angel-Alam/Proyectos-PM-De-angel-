#include <stdio.h>
/* Apuntadores, variables y valores. */
int main(void)
{
    int X = 3, Y = 7, Z[5] = {2, 4, 6, 8, 10};  // Declare and initialize variables
    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", 
           X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    int *IX;  // Declare pointer to int
    IX = &X;  // IX points to X
    Y = *IX;  // Y takes the value of X, now Y = 3
    *IX = 1;  // X is modified, now X = 1

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", 
           X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = &Z[2];  // IX points to the third element of Z
    Y = *IX;  // Y takes the value of Z[2], now Y = 6
    *IX = 15;  // Z[2] is modified, now Z[2] = 15

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", 
           X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    X = *IX + 5;  // X is modified, now X = Z[2] + 5 = 20
    *IX = *IX - 5;  // Z[2] is modified, now Z[2] = 10

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", 
           X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    ++*IX;  // Z[2] is incremented, now Z[2] = 11
    *IX += 1;  // Z[2] is incremented again, now Z[2] = 12

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", 
           X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    X = *(IX + 1);  // X takes the value of Z[3], now X = 8
    Y = *IX;  // Y takes the value of Z[2], now Y = 12

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", 
           X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = IX + 1;  // IX points to Z[3]
    Y = *IX;  // Y takes the value of Z[3], now Y = 8

    printf("\nX = %d \t Y = %d \t Z[0]= %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", 
           X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = IX + 4;  // IX points outside the array (undefined behavior, potential error)
    Y = *IX;  // Y takes a garbage value (undefined behavior)

    printf("\nX = %d \t Y = %d \t Z[0]= %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", 
           X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = &X;  // IX points to X
    IX = IX + 1;  // IX points to a garbage address (undefined behavior)
    X = *IX;  // X takes a garbage value

    printf("\nX = %d \t Y = %d \t Z[0]= %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", 
           X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    return 0;
}
