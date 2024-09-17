#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) {
    int reversed = 0, remainder, original;

    original = num;  // Store the original number

    // Loop to reverse the number
    for(num; num != 0; num /= 10) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
    }

    // Check if the original number is the same as the reversed number
    if (original == reversed)
        return 1; // Palindrome
    else
        return 0; // Not a palindrome
}

int main() {
    int num;

    // Input number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a palindrome
    if (isPalindrome(num)) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}
