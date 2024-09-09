#include <stdio.h>

int main() {
    int value;
    char character;
    // Ask the user for the numerical value
    printf("Enter a numerical value: ");
    scanf("%d", &value);
    
    // Find the ASCII character of the given value
     character = (char)value;
    
    // Display the result
    printf("The ASCII character for the value %d is '%c'\n", value, character);
    
    return 0;
}
