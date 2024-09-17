#include <stdio.h>
int main() {
    int choice;
    float num1, num2, result;

    // Menu-driven program
    while(1) {
        // Display the menu
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // If user chooses to exit
        if (choice == 5) {
            printf("Exiting...\n");
            break;
        }

        // Input numbers for the operation
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        // Perform operation based on user choice
        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid choice! Please choose a valid option.\n");
        }
    }

    return 0;
}
