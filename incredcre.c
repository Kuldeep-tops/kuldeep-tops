#include<stdio.h>
int main(){
    int d,c, sol;
    //variable define and use
    printf("\n Enter a numbers: ");
    scanf("%d %d",&d,&c);
    //operator post increment & post decrement are use
    d++;
    printf("\n post increment no is=%d",&d);
    c--;
    printf("\n post decrement no is =%d",&c);
    //pre increment or pre decrement
    ++d;
    printf("\n pre increment no is =%d",&d);
    --c;
    printf("\n pre decrement no is =%d",&c);
    
}