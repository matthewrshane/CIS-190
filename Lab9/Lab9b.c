#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARRAY_SIZE 5
#define RAND_BOUND 10

void initArr(int arr[ARRAY_SIZE]);

int main() {
	srand(time(NULL));
	int arr[ARRAY_SIZE]; initArr(arr);
	printf("Original: ");
	for(int i = 0; i < ARRAY_SIZE; i++)
		printf("%5d", arr[i]);
	printf("\n");
	
	/* TODO:  Initialize arrOfPointers */
	int *arrOfPointers[ARRAY_SIZE];
	// Loop through the array
	for(int i = 0; i < ARRAY_SIZE; i++) {
		// Loop through the array again to find the i-th smallest element
		for(int k = 0; k < ARRAY_SIZE; k++) {
			// Count the number of elements smaller than/equal to arr[k]
			int numSmaller = 0, numEqual = 0;
			for(int n = 0; n < ARRAY_SIZE; n++) {
				// Don't count the pivot element
				if(n == k) continue;

				// Count the number of elements < arr[k]
				if(arr[n] < arr[k]) numSmaller++;

				// Count the number of elements == arr[k]
				if(arr[n] == arr[k]) numEqual++;
			}

			// If i is in the range of [numSmaller, numSmaller + numEqual]
			// then it qualifies as the i-th smallest
			if(i >= numSmaller && i <= numSmaller + numEqual) {
				// Set the pointer at index i to arr + k
				arrOfPointers[i] = (arr + k);

				// Break out of the k for loop since the i-th smallest
				// element has been found
				break;
			}
		}
	}
	
	/* TODO: Print arr through arrOfPointers */
	printf("Reversed: ");
	for(int i = 0; i < ARRAY_SIZE; i++)
		printf("%5d", *arrOfPointers[i]);
	printf("\n");
	
	return 0;
}

void initArr(int arr[ARRAY_SIZE]) {
	for(int i = 0; i < ARRAY_SIZE; i++)
		arr[i] = rand() % RAND_BOUND;
}
