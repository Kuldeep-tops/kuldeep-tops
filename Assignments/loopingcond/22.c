#include <stdio.h>

int main() {
    int num, reversedNum, remainder, originalNum;
    int count = 0;

    // Loop to take input and check palindrome for 3 numbers
    while (count < 3) {
        printf("Enter a number: ");
        scanf("%d", &num);

        // Store the original number to compare later
        originalNum = num;
        reversedNum = 0;

        // Reverse the number
        while (num != 0) {
            remainder = num % 10;
            reversedNum = reversedNum * 10 + remainder;
            num /= 10;
        }

        // Check if the original number is equal to the reversed number
        if (originalNum == reversedNum) {
            printf("%d is a palindrome.\n", originalNum);
        } else {
            printf("%d is not a palindrome.\n", originalNum);
        }

        count++;  // Increase the count after checking one number
    }

    return 0;
}
