#include <stdio.h>

int main() {
    int num1, num2;
    int sum;

    // Input two numbers
    printf("Enter the two numbers: ");
    scanf("%d%d", &num1,&num2);
    
    // Calculate the sum
    sum = num1 + num2;

    // Output the sum
    printf("Sum: %d\n", sum);

    // Check the size of the sum
    printf("Size of the sum in bytes: %zu\n", sizeof(sum));

    return 0;
}
