/*
    Gets the number of minutes in a given amount of years.
*/

#include <stdio.h>

int main() {
    int year_amount = 0;
    // Prompt
    puts("Enter your age in years:");

    // Get input
    scanf("%d", &year_amount);

    // Result
    int minute_amount = year_amount * 525600;
    printf("\"%d\" years equates to \"%d\" minutes.\n", year_amount, minute_amount);

    return 0;
}