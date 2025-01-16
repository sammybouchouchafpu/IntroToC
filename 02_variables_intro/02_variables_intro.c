/*

    The introduction to variables.

*/

// Preprocessor directive
// stdio - standard input output

#include <stdio.h>

// Create a main function
int main() {
    // Create a variable
    int first_number;
    // Assign a value to the variable
    first_number = 927;

    // Create and initialize
    int second_number = 801;

    printf("The first number is %d.\nThe second number is %d.\n", first_number, second_number);

    // Create a sum of two numbers
    int sum = first_number + second_number;

    printf("%d + %d = %d\n", first_number, second_number, sum);

    return 0;
}