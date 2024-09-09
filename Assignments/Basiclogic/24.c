#include <stdio.h>
int main() {
    
    char emp1[20], emp2[20], emp3[20], emp4[20], emp5[20];
    
    float sal1, sal2, sal3, sal4, sal5, total, average;

    // Accepting names and salaries of 5 employees
    printf("Enter the name and salary of Employee 1: ");
    scanf("%s %f", emp1, &sal1);
    
    printf("Enter the name and salary of Employee 2: ");
    scanf("%s %f", emp2, &sal2);

    printf("Enter the name and salary of Employee 3: ");
    scanf("%s %f", emp3, &sal3);

    printf("Enter the name and salary of Employee 4: ");
    scanf("%s %f", emp4, &sal4);

    printf("Enter the name and salary of Employee 5: ");
    scanf("%s %f", emp5, &sal5);

    // Calculating total and average salary
    total = sal1 + sal2 + sal3 + sal4 + sal5;
    average = total / 5;

    // Displaying total and average salary
    printf("Total Salary: %.2f\n", total);
    printf("Average Salary: %.2f\n", average);

    return 0;
}
