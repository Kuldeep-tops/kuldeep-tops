#include<stdio.h>
int main() {
    
    int num, i, j, fact;

    // Loop to accept 5 numbers and calculate factorial for each
    for (j = 1; j <= 5; j++) {
        fact = 1;  // Reset factorial for each new number
        printf("Enter number %d for factorial: ", j);
        scanf("%d", &num);

        // Calculate factorial for the given number
        for (i = num; i >= 1; i--) {
            fact = fact * i;
        }

        // Output the factorial of the current number
        printf("Factorial of %d = %d\n", num, fact);
    }

    return 0;
}
