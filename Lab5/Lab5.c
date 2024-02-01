#include <stdio.h>

/**
 * @brief Prints a countdown from t until 1 using recursion.
 * 
 * @param t the initial time
 */
void countDown(int t) {
    // Print the current value
    printf("%d", t);

    // Check to see if t is less than or equal to 1 (base case)
    if(t <= 1) {
        // Print a newline character and exit the function
        printf("\n");
        return;
    }

    // Otherwise, append a tab to the printed line
    printf("\t");

    // Call the function again for t - 1
    countDown(t - 1);
}

/**
 * @brief Calculates the factorial of x.
 * 
 * @param x the value x to find the factorial of
 * @return the factorial of x (!x)
 */
int factorial(int x) {
    // Check for base cases
    if(x == 0) return 1;
    if(x <= 2) return x;

    // Otherwise, return x * !(x - 1)
    return x * factorial(x - 1);
}

/**
 * @brief Calculates the number of digits in x.
 * 
 * @param x the number to get the digits of
 * @return the number of digits in x
 */
int numDigits(int x) {
    // Check for negative number
    if(x < 0) return numDigits(-x);

    // Check for base case (x < 10)
    if(x < 10) return 1;

    // Otherwise, add one for this recursion and calculate the numDigits of x/10
    return 1 + numDigits(x / 10);
}

int main(void) {
    // Declare variables
    int countdown, fac, number;

    // Prompt the user for the number to count down from
    printf("Count down from: ");
    scanf("%d", &countdown);

    // Call the count down function
    countDown(countdown);

    // Prompt the user for the factorial.
    printf("Factorial of: ");
    scanf("%d", &fac);

    // Print the factorial
    printf("%d! = %d\n", fac, factorial(fac));

    // Prompt the user for the number of digits
    printf("Number of digits of: ");
    scanf("%d", &number);

    // Print the number of digits
    printf("numDigits(%d) = %d\n", number, numDigits(number));

    // Return 0
    return 0;
}