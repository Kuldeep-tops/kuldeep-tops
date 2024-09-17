#include <stdio.h>

int main() {
    int week_number;

    // Input the week number
    printf("Enter the week number (1-7): ");
    scanf("%d", &week_number);

    // Determine and print the corresponding weekday
    if (week_number == 1) {
        printf("Sunday\n");
    } 
    else if (week_number == 2) {
        printf("Monday\n");
    } 
    else if (week_number == 3) {
        printf("Tuesday\n");
    } 
    else if (week_number == 4) {
        printf("Wednesday\n");
    } 
    else if (week_number == 5) {
        printf("Thursday\n");
    } 
    else if (week_number == 6) {
        printf("Friday\n");
    } 
    else if (week_number == 7) {
        printf("Saturday\n");
    } 
    else {
        printf("Invalid week number. Please enter a number between 1 and 7.\n");
    }

    return 0;
}
