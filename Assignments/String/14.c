#include <stdio.h>

int main() {
    char str1[100], str2[100], combined[200];
    int i = 0, j = 0;

    // Input the first string
    printf("Enter the first string: ");
    gets(str1);  // For simplicity; consider using fgets() in real applications

    // Input the second string
    printf("Enter the second string: ");
    gets(str2);

    // Copy the first string to the combined string
    while (str1[i] != '\0') {
        combined[i] = str1[i];
        i++;
    }

    // Append the second string to the combined string
    while (str2[j] != '\0') {
        combined[i] = str2[j];
        i++;
        j++;
    }

    // Null-terminate the combined string
    combined[i] = '\0';

    // Output the combined string
    printf("The combined string is: %s\n", combined);

    return 0;
}
