#include <stdio.h>

int main() {
    int a, b, c, min;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find the minimum number using ternary operator
    min = (a < b) ? ((a < c) ? a = c) = ((b < c) ? b = c);

    // Print the minimum number
    printf("The minimum number is: %d\n", min);

    return 0;
}
