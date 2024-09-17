#include <stdio.h>

int main() {
    int numbers[5];  // Declare an array to store 5 numbers
    int i, j, temp;

    // Input 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Sorting the numbers in ascending order using bubble sort
    for(i = 0; i < 5 - 1; i++) {
        for(j = 0; j < 5 - i - 1; j++) {
            if(numbers[j] > numbers[j + 1]) {
                // Swap the numbers
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Display sorted numbers in ascending order
    printf("\nNumbers in ascending order:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    
    printf("\n");

    return 0;
}
