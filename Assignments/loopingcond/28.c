#include <stdio.h>
int main() {
    
    int num, mul = 1;

    // Input the number of terms to print
    printf("Enter the number of terms: ");
    scanf("%d", &num);

    // Print the sequence using a for loop
    for (int i = 1; i <= num; i++) {
        printf("%d ", mul);
   
        // Alternate between multiplication by 2 and 3
        if (i % 2 == 1) {
           mul *= 2;  // Multiply by 2 if i is odd
         //   mul= 2 * (mul-1);
           
        } else {
           mul *= 3;  // Multiply by 3 if i is even
          //  mul= 2/3 * (mul-1);
        }
    }

    printf("\n");
    return 0;
}
