#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], largest[50], smallest[50];
    int i = 0, j = 0, length, minLength = 100, maxLength = 0;

    // Input the string
    printf("Enter a string: ");
    gets(str);  // For simplicity; consider using fgets() in real applications

    // Traverse through the string to find words
    while (str[i] != '\0') {
        // If the current character is not a space or null terminator, copy it to the word array
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            // Null-terminate the word
            word[j] = '\0';
            length = strlen(word);

            // Update the smallest word
            if (length < minLength && length > 0) {
                strcpy(smallest, word);
                minLength = length;
            }

            // Update the largest word
            if (length > maxLength) {
                strcpy(largest, word);
                maxLength = length;
            }

            j = 0;  // Reset index for the next word
        }
        i++;
    }

    // To check the last word in case the string doesn't end with a space
    if (j > 0) {
        word[j] = '\0';
        length = strlen(word);
        if (length < minLength) {
            strcpy(smallest, word);
        }
        if (length > maxLength) {
            strcpy(largest, word);
        }
    }

    // Output the results
    printf("The smallest word is: %s\n", smallest);
    printf("The largest word is: %s\n", largest);

    return 0;
}
