#include <stdio.h>
int main() {
    
    int num,i;
    float sum = 0.0;

    // Input the value of n
    printf("Enter the value of num: ");
    scanf("%d", &num);

    // Calculate the sum of the series using for loop
    for ( i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            sum -= (float)i / (i + 1);  // Subtract if i is even
        } else {
            sum +=(float) i / (i + 1);  // Add if i is odd
        }
    }

    // Output the result
    printf("The sum of the series is: %.6fl\n", sum);

    return 0;
}
