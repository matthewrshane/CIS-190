#include <stdio.h>
#define ARRAY_SIZE 5

int main() {
	int arr[ARRAY_SIZE] = {0, 1, 2, 3, 4};
	printf("Original: ");
	for(int i = 0; i < ARRAY_SIZE; i++)
		printf("%5d", arr[i]);
	printf("\n");
	
	int *arrOfPointers[ARRAY_SIZE];
	/* TODO:  Initialize arrOfPointers */
	// Loop through the array
	for(int i = 0; i < ARRAY_SIZE; i++) {
		// Initialize each value in arrOfPointers to a pointer
		// starting from the end of the array
		arrOfPointers[i] = (arr + (ARRAY_SIZE - 1 - i));
	}

	/* TODO: Print arr through arrOfPointers */
	printf("Reversed: ");
	for(int i = 0; i < ARRAY_SIZE; i++)
		printf("%5d", *arrOfPointers[i]);
	printf("\n");
	
	return 0;
}
