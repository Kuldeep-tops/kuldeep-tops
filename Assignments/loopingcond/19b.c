#include <stdio.h>

// Driver code
int main() 
{    
    int i, j;
   
    // Number of rows
    int rows = 5;
   
    // Given a number
    int number = 65;
   
    // This loop is used to identify
    // number of rows
    for (i = 0; i < rows; i++) 
    {
        // This loop is used to identify number
        // of columns based on the rows
        for (j = 0; j <= i; j++) 
        {
            // Converting number in to character
            char character = (char)(number);
           
            // Printing character to get the 
            // required pattern
            printf("%c ", character);
           
            // Incrementing number value so 
            // that it will print the next 
            // character
            number++;
        }
        printf("\n");
    }
    return 0;
}