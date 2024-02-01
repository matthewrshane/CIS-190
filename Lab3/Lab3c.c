#include <stdio.h>

// Declare max size of the string
#define MAX_SIZE (128)

int main() {
    // Declare a char[] variable for holding the string
    char buffer[MAX_SIZE];

    // Prompt the user for a string
    printf("Enter a string: ");
    fgets(buffer, MAX_SIZE, stdin);

    // Loop through each character in the string
    for(int i = 0; i < MAX_SIZE; i++) {
        // If the character is a space ' ', print a newline (\n)
        if(buffer[i] == ' ') printf("\n");

        // Or if the character is a null byte '\0', end the printing
        else if(buffer[i] == '\0') break;

        // Otherwise, just print the character
        else printf("%c", buffer[i]);
    }

    return 0;
}