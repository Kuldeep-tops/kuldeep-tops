#include <stdio.h>
#include <string.h>

// Function to reverse a string using recursion
void reverseString(char str[], int start, int end) {
    if (start >= end) {
        return; // Base case: when start index is greater than or equal to end
    }

    // Swap characters at start and end
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursive call with next indices
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    gets(str);

    // Call the recursive function
    reverseString(str, 0, strlen(str) - 1);

    // Output the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
