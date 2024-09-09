#include <stdio.h>
int main() {
    
    float monthlysalary, insurance, loaninstallment, remainingsalary;
   
    printf("Enter your monthly salary: ");
    scanf("%f", &monthlysalary);

    insurance = monthlysalary * 0.10;
    
    loaninstallment = monthlysalary * 0.10;

    remainingsalary = monthlysalary - (insurance + loaninstallment);

    printf("Insurance Premium Deducted: %.2f\n", insurance);
    printf("Loan Installment Deducted: %.2f\n", loaninstallment);
    printf("Remaining Salary: %.2f\n", remainingsalary);

    return 0;
}
