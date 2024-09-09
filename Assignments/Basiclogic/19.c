#include <stdio.h>

int main() {
    
    double principal, rate, time, amount, compoundInterest;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the time period (in years): ");
    scanf("%lf", &time);
    
    amount = principal * (1 + rate / 100);
     amount = principal * (1 + rate / 100) * (1 + rate / 100);
     amount = principal * (1 + rate / 100) * (1 + rate / 100) * (1 + rate / 100);
     
      compoundInterest = amount - principal;
      
      printf("Compound Interest: %.2lf\n", compoundInterest);
   printf("Total Amount after %.2lf years: %.2lf\n", time, amount);

    return 0;
}