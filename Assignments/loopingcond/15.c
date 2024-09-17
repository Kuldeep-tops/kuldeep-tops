#include<stdio.h>
int main() {
    
    int num, i = 1, sum = 0;

    // Using while loop to accept 10 numbers and calculate their sum
    while (i <= 10) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        sum += num;  // Add the input number to the sum
        i++;         // Increment the loop counter
    }

    // Output the total sum
    printf("The sum of 10 numbers is: %d\n", sum);

    return 0;
}
