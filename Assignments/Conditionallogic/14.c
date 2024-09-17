#include <stdio.h>
int main() {
    int a, b, c, largest;

    // Input three numbers from user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Compare the three numbers
    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

    // Print the largest number
    printf("The largest number is: %d\n", largest);

    return 0;
}
