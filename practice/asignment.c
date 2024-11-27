#include<stdio.h>
int main(){
    int a, b, result;
    printf("Enter a no =");
    scanf("%d %d",&a,&b);
    //use asignment operators
    printf("a=%d \n b=%d",a,b);
    a+=5;  
    printf("\n a=%d",a);
    b*=20;
    printf("\n b=%d",b);
    a-=100;
    printf("\n a=%d",a); 
    a==5;
    printf("\n a=%d",a);
    b!=20;
    printf("\n b=%d",b);

}