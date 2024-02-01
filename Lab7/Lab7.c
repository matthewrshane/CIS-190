#include <stdio.h>
#define ARRAY_SIZE 5

void printArr(int arr[ARRAY_SIZE]);
int isIncreasing(int arr[ARRAY_SIZE]);
int isDecreasing(int arr[ARRAY_SIZE]);
int getMax(int arr[ARRAY_SIZE]);

int main() {
    int arr1[ARRAY_SIZE] = {2, 4, 6, 8, 10};
    printf("arr1: "); printArr(arr1);
    printf("Increasing? %s\n", isIncreasing(arr1) ? "Yes" : "No");
    printf("Decreasing? %s\n", isDecreasing(arr1) ? "Yes" : "No");
    printf("Max? %d\n\n", getMax(arr1));

    int arr2[ARRAY_SIZE] = {9, 7, 5, 3, 1};
    printf("arr2: "); printArr(arr2);
    printf("Increasing? %s\n", isIncreasing(arr2) ? "Yes" : "No");
    printf("Decreasing? %s\n", isDecreasing(arr2) ? "Yes" : "No");
    printf("Max? %d\n\n", getMax(arr2));

    int arr3[ARRAY_SIZE] = {3, 27, 243, 9, 81};
    printf("arr3: "); printArr(arr3);
    printf("Increasing? %s\n", isIncreasing(arr3) ? "Yes" : "No");
    printf("Decreasing? %s\n", isDecreasing(arr3) ? "Yes" : "No");
    printf("Max? %d\n", getMax(arr3));

    return 0;
}

void printArr(int arr[ARRAY_SIZE]) {
    // Loop through each element in the array
    for(int i = 0; i < ARRAY_SIZE; i++) {
        // Print the character with 5 spaces right justified
        printf("%5d", arr[i]);
    }

    // Print a newline character
    printf("\n");
}

int isIncreasing(int arr[ARRAY_SIZE]) {
    // Loop through each element in array starting with the second
    for(int i = 1; i < ARRAY_SIZE; i++) {
        // If the current element is not larger than the previous, return 0
        if(arr[i] <= arr[i - 1]) return 0;
    }

    // Otherwise, array is increasing, return 1
    return 1;
}

int isDecreasing(int arr[ARRAY_SIZE]) {
    // Loop through each element in array starting with the second
    for(int i = 1; i < ARRAY_SIZE; i++) {
        // If the current element is not smaller than the previous, return 0
        if(arr[i] >= arr[i - 1]) return 0;
    }

    // Otherwise, array is decreasing, return 1
    return 1;
}

int getMax(int arr[ARRAY_SIZE]) {
    // Assume the first index is the largest value
    int max = arr[0];

    // Loop through each element of the array starting with the second
    for(int i = 1; i < ARRAY_SIZE; i++) {
        // Set the value of max if this value is larger
        max = (arr[i] > max) ? arr[i] : max;
    }

    // Return the max value
    return max;
}