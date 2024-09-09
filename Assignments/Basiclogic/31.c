#include <stdio.h>

int main() {
    float kilometers;
    float meters;

    // Input number of kilometers
    printf("Enter the number of kilometers: ");
    scanf("%f", &kilometers);

    // Convert kilometers to meters
    meters = kilometers * 1000;

    // Output the result
    printf("%.2f kilometers is equal to %.2f meters.\n", kilometers, meters);

    return 0;
}
