#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, i;

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

    // Print the string in reverse order
    printf("String in reverse order: ");
    for(i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}
