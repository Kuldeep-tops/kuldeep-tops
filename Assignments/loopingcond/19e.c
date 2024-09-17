#include <stdio.h>
int main()
{
    int rows = 5;  
    int n = 1;      
    int width = 0;
     
    int lastNumber = rows * (rows + 1) / 2;
    
    while (lastNumber) {
        width++;          
        lastNumber /= 10;
    }
    
    for (int i = 0; i < rows; i++) {

        
        for (int j = 0; j <= i; j++) {     
            printf("%-*d ", width, n++);  
        }

        printf("\n");
    }

    return 0;
}