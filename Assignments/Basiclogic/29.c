#include <stdio.h>

int main() {
    int minutes;
    int seconds;
    int hours;
    int remainingMinutes;

    // Input number of minutes
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    // Calculate hours and remaining minutes
    hours = minutes / 60;
    remainingMinutes = minutes % 60;

    // Calculate seconds
    seconds = minutes * 60;

    // Output the results
    printf("Minutes: %d\n", minutes);
    printf("Hours: %d\n", hours);
    printf("Seconds: %d\n", seconds);

    return 0;
}
