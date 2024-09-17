#include <stdio.h>

int compareStrings(char str1[], char str2[]) {
    int i = 0;

    // Compare each character of both strings
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return (str1[i] - str2[i]);
        }
        i++;
    }

    // If both strings end at the same length, they are equal
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0;  // Strings are equal
    }

    // If strings are of different lengths, return the difference in lengths
    return (str1[i] - str2[i]);
}

int main() {
    char str1[100], str2[100];
    
    // Input two strings
    printf("Enter the first string: ");
    gets(str1);  // For simplicity; consider using fgets() in real applications
    printf("Enter the second string: ");
    gets(str2);
    
    // Compare the strings
    int result = compareStrings(str1, str2);
    
    // Output result
    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result > 0) {
        printf("The first string is greater than the second string.\n");
    } else {
        printf("The first string is smaller than the second string.\n");
    }

    return 0;
}
