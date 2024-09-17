#include <stdio.h>

int main() {
    float units, bill, surcharge, total_bill;

    // Ask for user input
    printf("Enter electricity units consumed: ");
    scanf("%f", &units);

    // Calculate bill based on the number of units consumed
    if (units <= 50) {
        bill = units * 0.50;
    } else if (units <= 150) {
        bill = (50 * 0.50) + ((units - 50) * 0.75);
    } else if (units <= 250) {
        bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    } else {
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    // Add 20% surcharge
    surcharge = bill * 0.20;
    total_bill = bill + surcharge;

    // Print the total bill
    printf("Total electricity bill: Rs. %.2f\n", total_bill);

    return 0;
}
