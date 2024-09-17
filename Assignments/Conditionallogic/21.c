#include <stdio.h>

int main() {
    float basic_salary, hra, da, gross_salary;

    // Input the basic salary of the employee
    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basic_salary);

    // Calculate HRA and DA based on the basic salary
    if (basic_salary <= 10000) {
        hra = basic_salary * 0.20;  // HRA = 20%
        da = basic_salary * 0.80;   // DA = 80%
    } 
    else if (basic_salary <= 20000) {
        hra = basic_salary * 0.25;  // HRA = 25%
        da = basic_salary * 0.90;   // DA = 90%
    } 
    else {
        hra = basic_salary * 0.30;  // HRA = 30%
        da = basic_salary * 0.95;   // DA = 95%
    }

    // Calculate the gross salary
    gross_salary = basic_salary + hra + da;

    // Output the gross salary
    printf("Gross Salary: %.2f\n", gross_salary);

    return 0;
}
