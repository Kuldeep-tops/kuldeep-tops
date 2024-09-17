#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, word_count = 0, length;

    // Taking input for the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate the length of the string
    length = strlen(str);

    // Remove the newline character if fgets adds it
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;  // Adjust the length after removing the newline
    }

    // Count words by checking for spaces between words
    for(i = 0; i < length; i++) {
        // Check if the current character is not a space, but the next character is a space or end of string
        if(!isspace(str[i]) && (isspace(str[i + 1]) || str[i + 1] == '\0')) {
            word_count++;
        }
    }

    // Output the total word count
    printf("Total number of words: %d\n", word_count);

    return 0;
}
