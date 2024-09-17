#include <stdio.h>
int main() {
    int num, reversedNum = 0, remainder;

    // Accept number input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number for comparison (optional)
    int originalNum = num;

    // Reverse the number using a for loop
    for(; num != 0; num /= 10) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
    }

    // Output the reversed number
    printf("Reversed number of %d is: %d\n", originalNum, reversedNum);

    return 0;
}
