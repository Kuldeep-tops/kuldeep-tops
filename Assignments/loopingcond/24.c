#include <stdio.h>
int main() {
    int num, sum = 0,i;

    // Ask user for the value of n
    printf("Enter a positive integer num: ");
    scanf("%d", &num);

    // Check if the input is valid
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Calculate the sum of the series
    for (i = 1; i <= num; i++) {
        sum += i;
    }

    // Print the result
    printf("The sum of the series 1 + 2 + 3 + ... + %d is %d\n", num, sum);
}