#include <stdio.h>

int main() {
    int numbers[5];  // Declare an array to store 5 numbers
    int i;

    // Input 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Check and display whether each number is even or odd
    printf("\nEven or Odd Check:\n");
    for(i = 0; i < 5; i++) {
        if(numbers[i] % 2 == 0) {
            printf("Number %d: %d is Even\n", i + 1, numbers[i]);
        } else {
            printf("Number %d: %d is Odd\n", i + 1, numbers[i]);
        }
    }

    return 0;
}
