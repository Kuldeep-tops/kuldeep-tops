#include <stdio.h>

int main() {
    char ch;

    // Ask for user input
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);  // Adding space before %c to ignore any previous newline

    // Check if the character is a vowel or consonant using switch case
    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is a consonant.\n", ch);
            break;
    }

    return 0;
}
