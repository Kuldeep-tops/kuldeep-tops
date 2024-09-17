#include<stdio.h>

int main(){
    int num, i, fact = 1;

    // Input a number
    printf("Enter number for factorial: ");
    scanf("%d", &num);

    i = num; // Initialize the loop variable

    // Using while loop to calculate factorial
    while(i >= 1) {
        fact = fact * i;
        i--;  // Decrement the loop variable
    }

    // Output the factorial
    printf("\nFactorial = %d", fact);

    return 0;
}
