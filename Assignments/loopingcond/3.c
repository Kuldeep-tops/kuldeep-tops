#include <stdio.h>

int main() {
    int num, evenCount = 0, oddCount = 0;
    int evenSum = 0, oddSum = 0;

    // Loop to accept 10 numbers
    for (int i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        // Check if the number is even or odd
        if (num % 2 == 0) {
            evenCount++;       // Increment even counter
            evenSum += num;     // Add to even sum
        } else {
            oddCount++;         // Increment odd counter
            oddSum += num;      // Add to odd sum
        }
    }

    // Display results
    printf("\nTotal even numbers: %d", evenCount);
    printf("\nTotal odd numbers: %d", oddCount);
    printf("\nSum of even numbers: %d", evenSum);
    printf("\nSum of odd numbers: %d\n", oddSum);

    return 0;
}
