#include <stdio.h>

int main() {
    char str[100], result[100];
    int i = 0, j = 0;

    // Input the string
    printf("Enter a string: ");
    gets(str);  // For simplicity; consider using fgets() in real applications

    // Traverse the string and copy only alphabetic characters to result
    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            result[j] = str[i];  // Copy alphabet character
            j++;
        }
        i++;
    }

    // Null-terminate the result string
    result[j] = '\0';

    // Output the modified string
    printf("String after removing non-alphabet characters: %s\n", result);

    return 0;
}
