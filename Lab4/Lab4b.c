#include <stdio.h>
#include <math.h>


/**
 * @brief Gets the number of digits in a number x via repeated modulo of 10
 * 
 * @param x the number to get the number of digits of
 * @param ret the variable reference to return the results into
 */
void numDigits(int x, int *ret) {
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
    *ret = count;
}

/**
 * @brief Get the ith digit of x, starting from the right
 * 
 * @param x the number x to get the ith digit of
 * @param i the index i, from 1 to numDigits(x) inclusive
 * @param ret the variable reference to return the results into
 */
void getDigit(int x, int i, int *ret) {
    // Calculate 10^i
    int power = pow(10, i);

    // Find the result of x % power
    int result = x % power;

    // Return the result as an integer division of result / (power / 10)
    *ret = (result / (power / 10));
}

/**
 * @brief Sums together each digit in a number
 * 
 * @param x the number to sum the digits of
 * @param ret the variable reference to return the results into
 */
void sumDigits(int x, int *ret) {
    // Declare a sum variable
    int sum = 0;

    // Declare and store the number of digits
    int num = 0;
    numDigits(x, &num);

    // Declare a variable to hold the digit
    int digit = 0;

    // Loop through each digit in x
    for(int i = 0; i < num; i++) {
        // Increment sum by the value of getDigit for this digit
        getDigit(x, i + 1, &digit);
        sum += digit;
    }

    // Return the sum
    *ret = sum;
}

int main() {
    // Declare variables for the number x, and the digit i
    int x, i;

    // Prompt the user for these variables
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Which digit? ");
    scanf("%d", &i);

    // Declare variables for each function result
    int num, digit, sum;

    // Calculate each of the results
    numDigits(x, &num);
    getDigit(x, i, &digit);
    sumDigits(x, &sum);

    // Print out the results of each function
    printf("numDigits(x = %d) = %d\n", x, num);
    printf("getDigit(x = %d, i = %d) = %d\n", x, i, digit);
    printf("sumDigits(x = %d) = %d\n", x, sum);

    return 0;
}