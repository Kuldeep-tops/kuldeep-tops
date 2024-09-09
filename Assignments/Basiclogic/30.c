#include <stdio.h>
int main() {
    
    int years;
    int days;
    int convertedYears;
    int remainingDays;
    
    // Convert years to days
    printf("Enter the number of years: ");
    scanf("%d", &years);
    days = years * 365;  // Simple conversion without leap years consideration
    
    // Output the number of days
    printf("%d years is approximately %d days.\n", years, days);

    // Convert days to years
    printf("Enter the number of days: ");
    scanf("%d", &days);
    convertedYears = days / 365;
    remainingDays = days % 365;  // Calculate remaining days after converting to years
    
    // Output the number of years and remaining days
    printf("%d days is approximately %d years and %d days.\n", days, convertedYears, remainingDays);

    return 0;
}
