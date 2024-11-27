#include<stdio.h>
int main(){
    //Using Arithmatic Operators
    int a, b, disp;
    printf("\n Enter numbers: ");
    scanf("%d %d",&a,&b);
    disp = a+b;
    printf("\n addition of =%d",disp);
    disp = a-b;
    printf("\n substraction of =%d",disp);
    disp = a/b;
    printf("\n Division of =%d", disp);
    disp = a*b;
    printf("\n Multiplication of =%d", disp);
    disp = a%b;
    printf("\n Modulo of =%d",disp);
    
}