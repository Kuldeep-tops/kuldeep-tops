#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    // Input the string
    printf("Enter a string: ");
    gets(str);  // or use fgets(str, 100, stdin) to avoid buffer overflow

    // Loop through the string until the null character is encountered
    while (str[length] != '\0') {
        length++;
    }

    // Output the length of the string
    printf("Length of the string is: %d\n", length);

    return 0;
}
