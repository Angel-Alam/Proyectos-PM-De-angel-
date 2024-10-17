#include <stdio.h>

/* Apuntadores y arreglos */
int main(void) {
    int V1[4] = {1, 3, 5, 7}, V2[4] = {2, 4, 0, 0}; // Initialize V2 with enough elements
    int *AX, *AY;
    
    AX = &V1[2]; // AX points to V1[2]
    AY = &V2[2]; // AY points to V2[2]
    
    V2[2] = *(AX + 1); // Assign V2[2] = V1[3] = 7
    V2[3] = *AX; // Assign V2[3] = V1[2] = 5
    AX = AX + 1; // Move AX to point to V1[3]
    
    V1[0] = *AX; // Assign V1[0] = V1[3] = 7
    
    printf("\nV1[0]=%d V1[1]=%d V1[2]=%d V1[3]=%d \tV2[0]=%d V2[1]=%d V2[2]=%d V2[3]=%d",
           V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V2[3]);
    
    V1[2] = *AY; // Assign V1[2] = V2[2] = 7
    V1[1] = --*AY; // Assign V1[1] = V2[2] = 6; V2[2] becomes 6 after decrement
    AX = AX + 1; // Move AX to point beyond the last element of V1 (out of bounds)
    
    V1[3] = *AX; // This line is invalid since AX is out of bounds (may cause undefined behavior)

    printf("\nV1[0]=%d V1[1]=%d V1[2]=%d V1[3]=%d \tV2[0]=%d V2[1]=%d V2[2]=%d V2[3]=%d",
           V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V2[3]);
    
    return 0; // Return 0 to indicate successful execution
}
