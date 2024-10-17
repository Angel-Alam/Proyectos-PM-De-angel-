#include <stdio.h>

/* Apuntadores y arreglos */
int main(void) {
    int X = 5, Y = 8, V[5] = {1, 3, 5, 7, 9};
    int *AY, *AX;

    AY = &Y; // AY points to Y
    X = *AY; // X is now equal to Y (8)
    *AY = V[3] + V[2]; // Y is now 12 (7 + 5)

    printf("\nX=%d Y=%d V[0]=%d  V[1]=%d V[2]=%d  V[3]=%d  V[4]=%d", 
            X, Y, V[0], V[1], V[2], V[3], V[4]);

    AX = &V[V[0] * V[1]]; // V[0] = 1, V[1] = 3, so AX points to V[3]
    X = *AX; // X is now equal to V[3] (7)
    Y = *AX * V[1]; // Y is now 7 * 3 = 21
    *AX = *AY - 3; // V[3] is now equal to Y - 3 = 12 - 3 = 9

    printf("\nX=%d Y=%d V[0]=%d  V[1]=%d V[2]=%d  V[3]=%d  V[4]=%d\n", 
            X, Y, V[0], V[1], V[2], V[3], V[4]);

    return 0; // Indicate successful termination
}
