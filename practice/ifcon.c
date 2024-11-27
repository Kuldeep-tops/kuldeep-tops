#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a>0)
    {
        /* code */
        printf("\n %d is positive number",a);
    }
    else{
        printf("\n %d is negative number",a);
    }
    printf("\n Thank you!");
    
}