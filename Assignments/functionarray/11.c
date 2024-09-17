#include <stdio.h>

int main() {
    int arr[5]; // Declare an array to store 5 numbers
    int i;

    // Input 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display numbers in reverse order
    printf("\nNumbers in reverse order:\n");
    for(i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");

    return 0;
}
