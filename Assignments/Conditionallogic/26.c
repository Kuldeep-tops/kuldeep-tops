#include <stdio.h>
int main() {
    int day;

    // Ask for user input
    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    // Display corresponding day of the week using switch case
    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number!\n");
            break;
    }

    return 0;
}