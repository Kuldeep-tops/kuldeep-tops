#include <stdio.h>
int main() {
    int num, range,i;

    // Accept the number from user
    printf("Enter the number to print table of: ");
    scanf("%d", &num);
    
    // Accept the range up to which the table should be printed
    printf("Enter the range: ");
    scanf("%d", &range);

    // Loop to print the multiplication table
    for (i = 1; i <= range; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
