#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char word[] = "is";
    int i = 0, j = 0, count = 0, temp;

    // Input the string
    printf("Enter a sentence: ");
    gets(str);  // For simplicity; consider using fgets() in real applications

    // Traverse the string and search for occurrences of the word "is"
    while (str[i] != '\0') {
        // Check if the current substring matches the word "is"
        if (str[i] == word[j]) {
            temp = i;
            while (str[i] == word[j] && word[j] != '\0') {
                i++;
                j++;
            }
            // If we successfully compared the whole word "is"
            if (word[j] == '\0' && (str[i] == ' ' || str[i] == '\0' || str[temp-1] == ' ')) {
                count++;
            }
            j = 0;  // Reset j to check for the next occurrence
        }
        i++;
    }

    // Output the number of occurrences
    printf("The word 'is' appears %d times in the sentence.\n", count);

    return 0;
}
