#include <stdio.h>
int main() {
    
    float monthlysalary, annualsalary;
    
    printf("Enter your monthly salary: ");
    scanf("%f", &monthlysalary);
    
    // Calculate the annual salary
    annualsalary = monthlysalary * 12;
    
    printf("Your annual salary is: %.2f\n", annualsalary);
    
    return 0;
}
