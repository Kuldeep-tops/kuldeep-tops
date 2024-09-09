#include <stdio.h>

int main() {
    int years, total_days, months, days;

    // Accepting number of years from user
    printf("Enter the number of years: ");
    scanf("%d", &years);

    // Converting years to total days
    total_days = years * 365;

    // Converting total days into months and remaining days
    months = total_days / 30;
    days = total_days % 30;

    // Displaying the result
    printf("%d years is equal to %d months and %d days.\n", years, months, days);

    return 0;
}
