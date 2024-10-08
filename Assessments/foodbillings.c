#include <stdio.h>

int main() {
    int choice, quantity;
    char moreitems;
    float totalBill = 0.0, amount = 0.0;

    do {
        // Display the menu
        printf("-------------Manu--------\n");
        printf("Please enter your choice:\n");
        printf("1. Pizza  - price= 180rs/pcs\n");
        printf("2. Burger - price= 100rs/pcs\n");
        printf("3. Dosa   - price= 120rs/pcs\n");
        printf("4. Idli   - price= 50rs/pcs\n");
        printf("Please enter your choose: ");
        scanf("%d", &choice);
        printf("\n");
        // Validate choice and proceed
        switch (choice) {
            case 1:
                printf("You have selected Pizza.\n");
                printf(" Enter the quantity: ");
                scanf("%d", &quantity);
                amount = 180 * quantity;
                break;
            case 2:
                printf("You have selected Burger.\n");
                printf(" Enter the quantity: ");
                scanf("%d", &quantity);
                amount = 100 * quantity;
                break;
            case 3:
                printf("You have selected Dosa.\n");
                printf(" Enter the quantity: ");
                scanf("%d", &quantity);
                amount = 120 * quantity;
                break;
            case 4:
                printf("You have selected Idli.\n");
                printf(" Enter the quantity: ");
                scanf("%d", &quantity);
                amount = 50 * quantity;
                break;
            default:
                printf("Invalid choice! Please select a valid item.\n");
                continue;  
        }

        // Calculate the total bill
        totalBill += amount;
        printf("Amount: %.2f\n", amount);
        printf("Total Amount is: %.2f\n", totalBill);

        // Ask the user if they want to place more orders
        printf("Do you want to place more orders? y & n: ");
       scanf(" %c", &moreitems);

    } while (moreitems == 'y' || moreitems == 'Y');

    // Display the final bill
    printf("Final Total Amount: %.2f\n", totalBill);

    return 0;
}
