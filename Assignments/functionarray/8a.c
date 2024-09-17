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
    struct Employee emp;

    // Input employee details
    printf("Enter Employee Number: ");
    scanf("%d", &emp.empno);
    getchar(); // To consume the newline character after entering the number
    printf("Enter Employee Name: ");
    gets(emp.empname);
    printf("Enter Employee Address: ");
    gets(emp.address);
    printf("Enter Employee Age: ");
    scanf("%d", &emp.age);

    // Display employee details
    printEmployee(emp);

    return 0;
}
