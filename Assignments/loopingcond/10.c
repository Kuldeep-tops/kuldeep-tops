#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // If the number is negative, make it positive
    if (num < 0) {
        num = -num;
    }

    // Get the last digit
    lastDigit = num % 10;

    // Get the first digit
    while (num >= 10) {
        num = num / 10;  // Remove the last digit until the first digit is left
    }
    firstDigit = num;

    // Calculate the summation of the first and last digits
    sum = firstDigit + lastDigit;

    // Output the result
    printf("The summation of the first and last digits is: %d\n", sum);

    return 0;
}
