#include <stdio.h>
int main() {
    int num, reverse = 0, remainder;

    // Accept the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to reverse the number
    while (num != 0) {
        remainder = num % 10;      // Get the last digit
        reverse = reverse * 10 + remainder; // Add the digit to reverse
        num /= 10;                 // Remove the last digit from the original number
    }

    // Print the reversed number
    printf("Reversed number: %d\n", reverse);

    return 0;
}
