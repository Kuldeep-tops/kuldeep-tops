#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    int i = 0;

    // Input the string
    printf("Enter a string: ");
    gets(str);  // For simplicity; consider using fgets() in real applications

    // Traverse the string character by character
    while (str[i] != '\0') {
        // Convert the character to lowercase for easier comparison
        char ch = str[i];
        
        // Check if it's a letter
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;  // Convert uppercase to lowercase

            // Check if it's a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;  // Count vowel
            } else {
                consonants++;  // Count consonant
            }
        }
        i++;
    }

    // Output the results
    printf("Total Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);

    return 0;
}
