#include <stdio.h>
int main() {
    int number;

    // Accept a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is even or odd using ternary operator
    (number % 2 == 0) ? printf("The number is even.\n") : printf("The number is odd.\n");

    return 0;
}
