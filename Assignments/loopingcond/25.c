#include <stdio.h>
int main() {
    int num, sum = 0,i;

    // Input the value of n
    printf("Enter the value of num: ");
    scanf("%d", &num);

    // Calculate sum of squares using for loop
    for (int i = 1; i <= num; i++) {
        sum += i * i;
    }

    // Output the result
    printf("The sum of squares from 1 to %d is: %d\n", num, sum);

    return 0;
}
