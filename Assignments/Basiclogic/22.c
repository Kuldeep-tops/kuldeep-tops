#include <stdio.h>

int main() {
    double principal, rate, time, amount, compoundInterest;

    // Input the principal amount, interest rate, and time period
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the time period (in years): ");
    scanf("%lf", &time);

    // Calculate the amount using the formula: Amount = P * (1 + R/100)^t
    amount = principal;
    for (int i = 0; i < time; i++) {
        amount *= (1 + rate / 100);
    }

    // Calculate the compound interest
    compoundInterest = amount - principal;

    // Display the compound interest and the total amount
    printf("Compound Interest: %.2lf\n", compoundInterest);
    printf("Total Amount after %.2lf years: %.2lf\n", time, amount);

    return 0;
}
