#include <stdio.h>
int main() {
    int marks;

    // Accept marks from the user
    printf("Enter your marks: ");
    scanf("%d", &marks);

    // Check if the marks are passing or failing
    if (marks >= 40) {
        printf("You have passed.\n");
    } else {
        printf("You have failed.\n");
    }

    return 0;
}
