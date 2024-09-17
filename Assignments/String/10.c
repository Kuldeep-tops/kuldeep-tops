#include <stdio.h>

int main() {
    char str[100], substr[100];
    int position, length, i;

    // Input the main string
    printf("Enter a string: ");
    gets(str);  // For simplicity; consider using fgets() in real applications

    // Input the starting position and the length of the substring
    printf("Enter the starting position: ");
    scanf("%d", &position);

    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    // Extract the substring
    for (i = 0; i < length; i++) {
        substr[i] = str[position + i];
    }

    // Null-terminate the extracted substring
    substr[i] = '\0';

    // Output the substring
    printf("The extracted substring is: %s\n", substr);

    return 0;
}
