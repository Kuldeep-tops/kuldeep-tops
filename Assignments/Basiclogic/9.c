#include <stdio.h>
int main()
{
   int  a,b,c;
   float triangle;

    printf("Enter side values of triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    
    //use circumference of triangle
    triangle = a + b + c;
    
   printf("Circumference of triangle=%f",triangle);
}