#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Define constants for the array
#define SIZE_ARRAY (10)
#define MIN_VALUE (1)   // inclusive
#define MAX_VALUE (11)  // exclusive

int main() {
    // Declare an integer array using the size constant
    int array[SIZE_ARRAY];

    // Set up the random number generator
    srand(time(NULL));

    // Loop through each integer in the array and set it to a random value
    for(int i = 0; i < SIZE_ARRAY; i++) {
        array[i] = (rand() % (MAX_VALUE - MIN_VALUE)) + MIN_VALUE;

        // Print out the value of the array
        printf("%-4d", array[i]);
    }

    // Print out a newline
    printf("\n");

    // Loop through each integer again, adding 1
    for(int i = 0; i < SIZE_ARRAY; i++) {
        array[i] = array[i] + 1;

        // Print out the value of the array
        printf("%-4d", array[i]);
    }

    return 0;
}