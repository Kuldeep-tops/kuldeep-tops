#include<stdio.h>
int main() {
    int num, i = 1, sum = 0;

    // Input the limit of natural numbers to sum
    printf("Enter a number: ");
    scanf("%d", &num);

    // Using while loop to calculate the sum of natural numbers
    while (i <= num) {
        sum += i;  // Add the current value of i to the sum
        i++;       // Increment i
    }

    // Output the total sum
    printf("The sum of the first %d natural numbers is: %d\n", num, sum);

    return 0;
}
