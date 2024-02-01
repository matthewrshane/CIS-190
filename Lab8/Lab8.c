#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARRAY_SIZE 6
#define RANDOM_BOUND 10

void printArr(int arr[ARRAY_SIZE]);
void swap(int arr[ARRAY_SIZE], int i, int j);
int isIncreasing(int arr[ARRAY_SIZE]);
void initArr(int arr[ARRAY_SIZE], int bound);
int randomSort(int arr[ARRAY_SIZE]);

int main() {
    int arr[ARRAY_SIZE] = {0, 1, 2, 3, 4, 5};
    printArr(arr);
    printf("\nRunning swap(arr, 1, 4).\n");
    swap(arr, 1, 4);
    printArr(arr);

    printf("\nRunning initArr(arr, %d).\n", RANDOM_BOUND);
    srand(time(NULL));
    initArr(arr, RANDOM_BOUND);
    printArr(arr);

    printf("\nRunning randomSort(arr).\n");
    int swaps = randomSort(arr);
    printArr(arr);
    printf("Swaps used: %d\n", swaps);

    return 0;
}

void printArr(int arr[ARRAY_SIZE]) {
    printf("Array:");
    for(int i = 0; i < ARRAY_SIZE; i++)
        printf("%5d", arr[i]);
    printf("\n");
}

/**
 * @brief Swaps the elements at positions i and j in array arr
 * 
 * @param arr the array
 * @param i first element to swap
 * @param j second element to swap
 */
void swap(int arr[ARRAY_SIZE], int i, int j) {
    // Declare a temp variable with one of the elements
    int temp = arr[i];

    // Swap the elements
    arr[i] = arr[j];
    arr[j] = temp;
}

/**
 * @brief Checks if the elements in an array are increasing
 * 
 * @param arr the array to check
 * @return 1 if the elements in arr are increasing, or 0 if they are not
 */
int isIncreasing(int arr[ARRAY_SIZE]) {
    // Loop through the array starting with the second element
    for(int i = 1; i < ARRAY_SIZE; i++) {
        // If the current element is smaller than the previous element, return 0
        if(arr[i] < arr[i - 1]) return 0;
    }

    // Otherwise, assume the array is increasing, return 1
    return 1;
}

/**
 * @brief Fill the array with random integers from [0, bound)
 * 
 * @param arr the array to fill
 * @param bound the max bound to randomly generate, exclusive
 */
void initArr(int arr[ARRAY_SIZE], int bound) {
    // Loop through every element in the array
    for(int i = 0; i < ARRAY_SIZE; i++) {
        // Set the current element to a random int in the range [0, bound)
        arr[i] = rand() % bound;
    }
}

/**
 * @brief Randomly swaps two indices until the array is sorted
 * 
 * @param arr the array to sort
 * @return the number of swaps used to sort the array
 */
int randomSort(int arr[ARRAY_SIZE]) {
    // Declare a count for number of swaps
    int swaps = 0;

    // Loop until the array is sorted
    while(!isIncreasing(arr)) {
        // Pick two random indices from [0, ARRAY_SIZE)
        int i = rand() % ARRAY_SIZE, j = rand() % ARRAY_SIZE;

        // Swap the two indices
        swap(arr, i, j);

        // Increase the swap counter
        swaps++;
    }

    // Once the array is sorted, return the number of swaps used
    return swaps;
}