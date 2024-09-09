#include <stdio.h>
int main() {
    float exp1, exp2, exp3, exp4, exp5, total, average;

    // Accepting the 5 expenses
    printf("Enter expense 1: ");
    scanf("%f", &exp1);

    printf("Enter expense 2: ");
    scanf("%f", &exp2);

    printf("Enter expense 3: ");
    scanf("%f", &exp3);

    printf("Enter expense 4: ");
    scanf("%f", &exp4);

    printf("Enter expense 5: ");
    scanf("%f", &exp5);

    // Calculating total and average of expenses
    total = exp1 + exp2 + exp3 + exp4 + exp5;
    average = total / 5;

    // Displaying total and average
    printf("Total Expense: %.2f\n", total);
    printf("Average Expense: %.2f\n", average);

    return 0;
}
