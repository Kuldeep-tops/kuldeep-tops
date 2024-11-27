#include<stdio.h>
int main(){
    int number,reverse=0,rem,origin_num;
    printf("Enter number: ");
    scanf("%d",&number);
    origin_num=number;
    while (number>0){
        /* code */
        rem=number%10;
        reverse=reverse*10+rem;
        number=number/10;

    }
    printf("\n reverse number=%d",reverse);
    if(origin_num==reverse){
        printf("\n %d is palindrome",reverse);

    }
    else{
        printf("\n %d is not palindrome",reverse);

    }
}