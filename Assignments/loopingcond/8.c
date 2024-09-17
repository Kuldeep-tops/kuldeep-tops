#include <stdio.h>
int main() {
    int num, digit, max = 0;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // If the number is negative, make it positive
    if (num < 0) {
        num = -num;
    }

    // Loop through the digits of the number using while loop
    while (num > 0) {
        digit = num % 10;  // Get the last digit

        // Check if the digit is greater than the current max
        if (digit > max) {
            max = digit;
        }

        num = num / 10;  // Remove the last digit from the number
    }

    // Output the maximum digit
    printf("The maximum digit is: %d\n", max);

    return 0;
}
