#include <stdio.h>

// Structure definition
struct EmployeeStruct {
    int empno;
    char empname[50];
    float salary;
};

// Union definition
union EmployeeUnion {
    int empno;
    char empname[50];
    float salary;
};

int main() {
    // Creating structure and union variables
    struct EmployeeStruct empStruct;
    union EmployeeUnion empUnion;

    // Assign values to the structure
    empStruct.empno = 101;
    empStruct.salary = 50000.50;
    // Let's use strcpy to copy strings into character arrays
    strcpy(empStruct.empname, "John Struct");

    // Display the structure values
    printf("Structure:\n");
    printf("Employee Number: %d\n", empStruct.empno);
    printf("Employee Name: %s\n", empStruct.empname);
    printf("Employee Salary: %.2f\n", empStruct.salary);

    // Assign values to the union
    empUnion.empno = 201;
    empUnion.salary = 60000.75;
    strcpy(empUnion.empname, "John Union");

    // Display the union values (note that values get overwritten)
    printf("\nUnion:\n");
    printf("Employee Number: %d\n", empUnion.empno);
    printf("Employee Name: %s\n", empUnion.empname);
    printf("Employee Salary: %.2f\n", empUnion.salary); 

    return 0;
}
