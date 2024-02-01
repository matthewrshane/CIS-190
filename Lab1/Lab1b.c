#include <stdio.h>

int main(void) {
    // Declare input integers
    int inputNum1, inputNum2;

    // Ask the user to input both numbers
    printf("Enter an integer value for inputNum1: ");
    scanf("%d", &inputNum1);
    printf("Enter an integer value for inputNum2: ");
    scanf("%d", &inputNum2);

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