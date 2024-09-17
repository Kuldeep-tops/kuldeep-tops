#include <stdio.h>

int main() {
    int num, i;  // variable to store each number
    
    //printf("Enter number: ",i);
   // scanf("%d",i);
        
    // Loop to accept and display 5 numbers
    for ( i = 0; i <= 4; i++) {     
    
       printf("Enter number: ",i);
        scanf("%d", &num);
        printf("You entered: %d\n", num);
        
    }

    return 0;
}
