#include <stdio.h>

int main() {
    int num, sum = 0;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // If the number is negative, make it positive
    if (num < 0) {
        num = -num;
    }

    // Summation of digits without using loop
    sum = (num % 10) + (num / 10 % 10) + (num / 100 % 10) + (num / 1000 % 10);

    // Output the result
    printf("The summation of digits is: %d\n", sum);

    return 0;
}
