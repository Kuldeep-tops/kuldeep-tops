#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;

    // Input the string
    printf("Enter a string: ");
    gets(str);  // For simplicity; consider using fgets() in real applications

    // Traverse the string to calculate its length
    while (str[i] != '\0') {
        length++;
        i++;
    }

    // Output the length of the string
    printf("The maximum number of characters in the string is: %d\n", length);

    return 0;
}
