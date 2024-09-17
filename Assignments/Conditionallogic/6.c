#include <stdio.h>

int main() {
    char ch;

    // Accept a character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a vowel (both uppercase and lowercase)
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is not a vowel.\n", ch);
    }

    return 0;
}
