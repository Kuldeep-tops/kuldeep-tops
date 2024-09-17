#include <stdio.h>
int main() {
    int num, sum = 0,i,j;

    // Input the value of n
    printf("Enter the value of num: ");
    scanf("%d", &num);

    // Calculate the sum using nested for loops
    for ( i = 1; i <= num; i++) {
        for ( j = 1; j <= i; j++) {
            sum += j;
        }
    }

    // Output the result
    printf("The sum of the series is: %d\n", sum);

    return 0;
}
