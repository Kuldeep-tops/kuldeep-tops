#include <stdio.h>

int main() {
    char str[100];
    int alphabets = 0, digits = 0, specialCharacters = 0;
    int i = 0;

    // Input a string
    printf("Enter a string: ");
    gets(str);  // For simplicity; consider using fgets() in real applications

    // Traverse the string character by character
    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;  // Count alphabets
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;  // Count digits
        } else {
            specialCharacters++;  // Count special characters
        }
        i++;
    }

    // Output the results
    printf("Total Alphabets: %d\n", alphabets);
    printf("Total Digits: %d\n", digits);
    printf("Total Special Characters: %d\n", specialCharacters);

    return 0;
}
