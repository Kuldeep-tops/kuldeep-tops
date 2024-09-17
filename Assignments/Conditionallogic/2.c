#include <stdio.h>
int main() {
    int m;

    // Accept an integer value from the user
    printf("Enter an integer value for m: ");
    scanf("%d", &m);

    // Check if m is greater than 0, equal to 0, or less than 0
    if (m > 0) {
        printf("The value of m is 1.\n");
    } else if (m == 0) {
        printf("The value of m is 0.\n");
    } else {
        printf("The value of m is -1.\n");
    }

    return 0;
}
