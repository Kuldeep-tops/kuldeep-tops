#include <stdio.h>

int main() {
    int a2;
    float a;   
    
    printf("Enter side length of cube: ");
    scanf("%d", &a2);
    
    //use area of cube 
    a = 6 * a2 * a2;
    printf("Area of cube: %.2f\n", a);
    
    return 0;
}