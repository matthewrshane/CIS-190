#include <stdio.h>

int main(void) {
    // Declare and initialize input integers
    int inputNum1 = 20, inputNum2 = 5;

    // Declare three integer variables and one floating point variable
    int sum, difference, product;
    float quotient;

    // Assign values to the variables
    sum = inputNum1 + inputNum2;
    difference = inputNum1 - inputNum2;
    product = inputNum1 * inputNum2;
    quotient = ((float) inputNum1) / inputNum2;

    // Print variables as presented in figure 1 of the lab
    printf("%d + %d = %d\n", inputNum1, inputNum2, sum);
    printf("%d - %d = %d\n", inputNum1, inputNum2, difference);
    printf("%d * %d = %d\n", inputNum1, inputNum2, product);
    printf("%d / %d = %f\n", inputNum1, inputNum2, quotient);

    // Return 0
    return 0;
}