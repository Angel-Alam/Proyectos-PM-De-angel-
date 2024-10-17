#include <stdio.h>

/* Apuntadores y arreglos */
int main(void) {
    int V1[4] = {2, 3, 4, 7}, V2[4] = {6, 0, 0, 0}; // Initialize V2 with 4 elements
    int *AX, *AY;

    AX = &V1[3]; // AX points to the last element of V1
    AY = &V2[2]; // AY points to the third element of V2

    V1[V2[0] - V1[2]] = *AY; // V1[6-4] = 0; V1[2] = 0
    *AY = *AX - V1[0]; // V2[2] = 7 - 2 = 5
    printf("\nV1[0]=%d V1[1]=%d V1[2]=%d V1[3]=%d \tV2[0]=%d V2[1]=%d V2[2]=%d V2[3]=%d",
           V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V2[3]);

    V2[1] = ++*AX; // V2[1] = ++(V1[3]) = ++7 = 8
    V2[3] = (*AY)++; // V2[3] = 5; then V2[2] becomes 6 (post-increment)
    *AX += 2; // V1[3] += 2 -> V1[3] = 9

    printf("\nV1[0]=%d V1[1]=%d V1[2]=%d V1[3]=%d \tV2[0]=%d V2[1]=%d V2[2]=%d V2[3]=%d",
           V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V2[3]);

    return 0; // Indicate successful termination
}
