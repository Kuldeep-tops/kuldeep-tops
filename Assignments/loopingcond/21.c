#include <stdio.h>

int main() {
    int i;
    
    // Loop from 1 to 50
    for(i = 1; i <= 50; i++) {
        // Print leading zero if the number is less than 10
        if(i < 10) {
            printf("0%d ", i);
        } else {
            printf("%d ", i);
        }
        
        // Print a newline after every 10 numbers
        if(i % 10 == 0) {
            printf("\n");
        }
    }
    
    return 0;
}
