#include <stdio.h>
int main() {
    int days, months, remainingdays;

    // Accepting number of days from user
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Converting days to months and remaining days
    months = days / 30;            // Assuming 1 month = 30 days
    remainingdays = days % 30;     // Remaining days after converting to months

    // Displaying the result
    printf("%d days is equal to %d months and %d days.\n", days, months, remainingdays);

    return 0;
}
