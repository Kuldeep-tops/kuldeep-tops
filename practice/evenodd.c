#include<stdio.h>
int main(){
    int a;
    printf("Enter a numbers: ");
    scanf("%d",&a);

    if(a%2!=0){
        printf("%d is odd number",a);
    }
    else{
        printf("%d is even number",a);
    }
    // if(b%2!=0){
    //     printf("%d is even number",b);
    // }
    // else{
    //     printf("%d is odd number",b);
    // }
}