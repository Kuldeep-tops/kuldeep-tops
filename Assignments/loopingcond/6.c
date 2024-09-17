#include <stdio.h>
int main() {
    int num, first = 0, second = 1, next;

    // Accept the number of terms from the user
    printf("Enter the number of terms: ");
    scanf("%d", &num);

    // Print the first two terms of the Fibonacci series
    printf("Fibonacci Series: %d %d ", first, second);

    // Loop to generate the Fibonacci series
    for (int i = 3; i <= num; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}
