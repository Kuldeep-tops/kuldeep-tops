#include <stdio.h>

int main() {
    int num;
    int power1, power2, power3;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate first three powers
    power1 = num;            // N^1
    power2 = num * num;       // N^2
    power3 = num * num * num; // N^3

    // Output the results
    printf("N^1 = %d\n", power1);
    printf("N^2 = %d\n", power2);
    printf("N^3 = %d\n", power3);

    return 0;
}
