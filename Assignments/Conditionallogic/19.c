#include <stdio.h>

int main() {
    int customer_id;
    char customer_name[50];
    float units_consumed, total_bill, surcharge = 0;

    // Input customer details and units consumed
    printf("Enter customer ID: ");
    scanf("%d", &customer_id);

    printf("Enter customer name: ");
    scanf("%s", customer_name);

    printf("Enter units consumed: ");
    scanf("%f", &units_consumed);

    // Calculate the total bill based on the units consumed
    if (units_consumed <= 350) {
        total_bill = units_consumed * 1.20;
    } 
    else if (units_consumed > 350 && units_consumed < 600) {
        total_bill = units_consumed * 1.50;
    } 
    else if (units_consumed >= 600 && units_consumed < 800) {
        total_bill = units_consumed * 1.80;
    } 
    else {
        total_bill = units_consumed * 2.00;
    }

    // Check if a surcharge is applicable
    if (total_bill > 800) {
        surcharge = total_bill * 0.18;  // 18% surcharge
        total_bill += surcharge;
    }

    // Ensure the minimum bill is Rs. 256
    if (total_bill < 256) {
        total_bill = 256;
    }

    // Print the customer details and the total bill
    printf("\nElectricity Bill:\n");
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %.2f\n", units_consumed);
    printf("Total Bill: Rs. %.2f\n", total_bill);
    
    return 0;
}
