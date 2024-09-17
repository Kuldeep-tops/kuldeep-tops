#include <stdio.h>

int main() {
    int numbers[5];  // Declare an array to store 5 numbers
    int i, sum = 0;  // Variable to store the sum

    // Input 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculate the sum of the array elements
    for(i = 0; i < 5; i++) {
        sum += numbers[i];  // Add each number to the sum
    }

    // Display the sum
    printf("\nThe sum of the array elements is: %d\n", sum);

    return 0;
}
