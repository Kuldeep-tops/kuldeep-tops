#include<stdio.h>

int main() {
    int num, i = 1, evenCount = 0, oddCount = 0;

    // Using while loop to accept 5 numbers and count even and odd numbers
    while (i <= 5) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            evenCount++;  // Increment even count if number is divisible by 2
        } else {
            oddCount++;   // Increment odd count if number is not divisible by 2
        }

        i++;  // Increment the loop counter
    }

    // Output the count of even and odd numbers
    printf("\nNumber of even numbers: %d", evenCount);
    printf("\nNumber of odd numbers: %d\n", oddCount);

    return 0;
}
