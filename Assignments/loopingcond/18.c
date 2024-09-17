#include<stdio.h>

int main() {
    int num, i;

    // Input the number for the multiplication table
    printf("Enter the number for the multiplication table: ");
    scanf("%d", &num);

    // Using for loop to print the multiplication table of the given number
    for(i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}
