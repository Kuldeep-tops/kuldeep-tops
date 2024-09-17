#include <stdio.h>

int main() {
    float cost_price, selling_price, profit_or_loss;

    // Input the cost price and selling price
    printf("Enter the cost price: ");
    scanf("%f", &cost_price);

    printf("Enter the selling price: ");
    scanf("%f", &selling_price);

    // Calculate profit or loss
    if (selling_price > cost_price) {
        profit_or_loss = selling_price - cost_price;
        printf("You made a profit of: %.2f\n", profit_or_loss);
    } 
    else if (cost_price > selling_price) {
        profit_or_loss = cost_price - selling_price;
        printf("You incurred a loss of: %.2f\n", profit_or_loss);
    } 
    else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
