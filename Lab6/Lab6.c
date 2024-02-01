#include <stdio.h>
#include <string.h>
#define MAX_SIZE 128

void reverse(char *str) {
    // Loop backwards through each char in str (except the \n)
    for(int i = strlen(str) - 2; i >= 0; i--) {
        // Print the char
        printf("%c", str[i]);
    }

    // Print a newline character to end the line
    printf("\n");
}

int hasChar(char *str, char c) {
    // Loop through each char in str
    for(int i = 0; i < strlen(str); i++) {
        // If the current char is equal to c, return 1
        if(str[i] == c) return 1;
    }

    // Otherwise, the string doesn't contain c, thus return 0
    return 0;
}


void replaceChar(char *str, char old, char new) {
    // Loop through each char in str
    for(int i = 0; i < strlen(str); i++) {
        // If the current char in str equals old, set this char to new
        if(str[i] == old) str[i] = new;
    }
}


int main() {
    // Declare variables
    char strReverse[MAX_SIZE], strHasChar[MAX_SIZE], strReplaceChar[MAX_SIZE];
    char cHasChar, oldReplace, newReplace;

    // Prompt the user for values and execute the reverse function
    printf("Enter a string: ");
    fgets(strReverse, MAX_SIZE, stdin);
    reverse(strReverse);
    printf("\n");


    // Prompt the user for values and execute the hasChar function
    printf("Enter a string: ");
    fgets(strHasChar, MAX_SIZE, stdin);
    printf("Enter a char: ");
    cHasChar = getchar();
    getchar(); // remove the newline char from the buffer
    printf("hasChar = %d\n\n", hasChar(strHasChar, cHasChar));


    // Prompt the user for values and execute the replaceChar function
    printf("Enter a string: ");
    fgets(strReplaceChar, MAX_SIZE, stdin);
    printf("Char to replace: ");
    oldReplace = getchar(); getchar();
    printf("Replace with: ");
    newReplace = getchar(); getchar();
    replaceChar(strReplaceChar, oldReplace, newReplace);
    printf(strReplaceChar);

    return 0;
}