#include <stdio.h>

int main() {
    char ch;

    // Accept a character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is uppercase, lowercase, digit, or special character
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase letter.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase letter.\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}
