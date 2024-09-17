l#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Input the string
    printf("Enter a sentence: ");
    gets(str);  // For simplicity; consider using fgets() in real applications

    // Traverse the string character by character
    while (str[i] != '\0') {
        // Check if the character is lowercase and convert it to uppercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        // Check if the character is uppercase and convert it to lowercase
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }

    // Output the modified string
    printf("Modified sentence: %s\n", str);

    return 0;
}
