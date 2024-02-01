#include <stdio.h>

int main() {
    // Declare variables for the number of rows and columns
    int rows, cols;

    // Prompt the user to enter the number of rows and columns
    printf("How many rows? ");
    scanf("%d", &rows);
    printf("How many columns? ");
    scanf("%d", &cols);

    // Ensure the # of rows and columns are greater than 0
    if(rows <= 0 || cols <= 0) {
        printf("Invalid rectangle size (r x c): %d x %d. Rectangle dimensions must be positive!", rows, cols);
        return -1;
    }

    // Loop through each row, then each column in the row
    for(int r = 0; r < rows; r++) {
        for(int c = 0; c < cols; c++) {
            // Print out the value at this point
            printf("%-4d", (r * cols) + c + 1);
        }
        // Print a new line for each new row
        printf("\n");
    }

    return 0;
}