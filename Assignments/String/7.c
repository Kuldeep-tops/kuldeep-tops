#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    // Input the source string
    printf("Enter the source string: ");
    gets(str1);  // For simplicity; consider using fgets() in real applications

    // Copy the contents of str1 to str2
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }

    // Null terminate the copied string
    str2[i] = '\0';

    // Output the copied string
    printf("The copied string is: %s\n", str2);

    return 0;
}
