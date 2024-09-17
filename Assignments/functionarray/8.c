#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char str[], char reversed[]) {
    int len = 0, i;
    
    // Calculate string length manually
    while (str[len] != '\0') {
        len++;
    }

    // Reverse the string
    for (i = 0; i < len; i++) {
        reversed[i] = str[len - i - 1];
    }
    reversed[len] = '\0'; // Null terminate the reversed string
}

// Function to check if the string is a palindrome
int isPalindrome(char str[], char reversed[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] != reversed[i]) {
            return 0; // Not a palindrome
        }
        i++;
    }
    return 1; // Palindrome
}

int main() {
    char str[100], reversed[100];

    // Input string
    printf("Enter a string: ");
    gets(str);

    // Reverse the string
    reverseString(str, reversed);
    
    // Print the reversed string
    printf("Reversed string: %s\n", reversed);

    // Check if palindrome
    if (isPalindrome(str, reversed)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
