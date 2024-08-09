#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the numbers: ");
    scanf("%d %d",&a,&b);
    printf("\n Bitwise and:%d ",a&b);
    printf("\n Bitwise or:%d ", a|b);
    printf("\n exclusive or:%d ", a^b);
    printf("\n negation of:%d ",~a);

}