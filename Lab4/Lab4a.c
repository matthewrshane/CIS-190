#include <stdio.h>
#include <math.h>


/**
 * @brief Gets the number of digits in a number x via repeated modulo of 10
 * 
 * @param x the number to get the number of digits of
 * @return the number of digits in x 
 */
int numDigits(int x) {
    // Declare a variable to hold the remainder of each modulo,
    // and a digit count starting with 1 since the while loop skips the last digit
    int remainder = 0, count = 1;

    // Loop through until the value of x is equal to the remainder, thus being on the last digit
    while(x != (remainder = x % 10)) {
        // Subtract the remainder, divide x by 10, then increment the count
        x -= remainder;
        x /= 10;
        count++;
    }

    // Return the count of digits
    return count;
}

/**
 * @brief Get the ith digit of x, starting from the right
 * 
 * @param x the number x to get the ith digit of
 * @param i the index i, from 1 to numDigits(x) inclusive
 * @return the ith digit of x
 */
int getDigit(int x, int i) {
    // Calculate 10^i
    int power = pow(10, i);

    // Find the result of x % power
    int result = x % power;

    // Return the result as an integer division of result / (power / 10)
    return result / (power / 10);
}

/**
 * @brief Sums together each digit in a number
 * 
 * @param x the number to sum the digits of
 * @return the sum of each of the digits
 */
int sumDigits(int x) {
    // Declare a sum variable
    int sum = 0;

    // Loop through each digit in x
    for(int i = 0; i < numDigits(x); i++) {
        // Increment sum by the value of getDigit for this digit
        sum += getDigit(x, i + 1);
    }

    // Return the sum
    return sum;
}

int main() {
    // Declare variables for the number x, and the digit i
    int x, i;

    // Prompt the user for these variables
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Which digit? ");
    scanf("%d", &i);

    // Print out the results of each function
    printf("numDigits(x = %d) = %d\n", x, numDigits(x));
    printf("getDigit(x = %d, i = %d) = %d\n", x, i, getDigit(x, i));
    printf("sumDigits(x = %d) = %d\n", x, sumDigits(x));

    return 0;
}