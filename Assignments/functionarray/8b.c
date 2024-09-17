#include <stdio.h>

// Structure definition for employee
struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

// Function to print employee information
void printEmployee(struct Employee emp) {
    printf("\nEmployee Number: %d", emp.empno);
    printf("\nEmployee Name: %s", emp.empname);
    printf("\nEmployee Address: %s", emp.address);
    printf("\nEmployee Age: %d\n", emp.age);
}

int main() {
    struct Employee emp[5];
    int i;

    // Input details for five employees
    for (i = 0; i < 5; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Enter Employee Number: ");
        scanf("%d", &emp[i].empno);
        getchar(); // To consume the newline character
        printf("Enter Employee Name: ");
        gets(emp[i].empname);
        printf("Enter Employee Address: ");
        gets(emp[i].address);
        printf("Enter Employee Age: ");
        scanf("%d", &emp[i].age);
    }

    // Display details for five employees
    for (i = 0; i < 5; i++) {
        printf("\nDetails of Employee %d:\n", i + 1);
        printEmployee(emp[i]);
    }

    return 0;
}
