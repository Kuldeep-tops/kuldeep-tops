#include<stdio.h>
int main(){
    int a,b,disp;
    printf("Enter numbers:");
    scanf("%d %d",&a,&b);
    disp= (a>1) && (b<100);
    printf("\n Logical operator And=%d",disp);
    disp= (a>5) || (b<=15);
    printf("\n Logical OR=%d",disp);
    printf("\n Logical Not=%d",b!=25);

}