#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Swap using a third variable
       temp = num1;
       num1 = num2;
       num2 = temp;
    
    //without using third variable 
     //num1 = num1 + num2;  
    //num2 = num1 - num2;  
    //num1 = num1 - num2;  


    // Display the swapped values
    printf("After swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}
