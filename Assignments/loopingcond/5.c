#include <stdio.h>
int main() {
    int num, factorial = 1;

    // Accept the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to calculate factorial
    for (int i = 1; i <= num; i++) {
        factorial *= i;  // Multiply factorial by current value of i
    }

    // Print the factorial
    printf("Factorial of %d is %d\n", num, factorial);

    return 0;
}
