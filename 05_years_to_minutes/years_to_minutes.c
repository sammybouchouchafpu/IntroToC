/*
    Gets the number of minutes in a given amount of years.
*/

#include <stdio.h>

int main() {
    float year_amount = 0;
    // Prompt
    puts("Enter your age in years:");

    // Get input
    scanf("%f", &year_amount);

    // Result
    float minute_amount = year_amount * 525600;
    if (year_amount == 1) {
        printf("\"%f\" year equates to \"%f\" minutes.\n", year_amount, minute_amount);
    }   else if (year_amount > 0 || year_amount == 0) {
        printf("\"%f\" years equates to \"%f\" minutes.\n", year_amount, minute_amount);
    }   else {
        printf("Age cannot be negative!\n");
    }

    return 0;
}