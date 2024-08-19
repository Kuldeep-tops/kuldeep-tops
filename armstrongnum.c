#include<stdio.h>
int main(){
    int number,remind,sum=0,origin_num;
    printf("Enter number: ");
    scanf("%d",&number);
     origin_num=number;
     while (number>0){
        /* code */
        remind=number%10;
        sum=sum+remind*remind*remind;
        number=number/10;

     }
     printf("sum of number=%d",sum);
    if (sum==origin_num){
        /* code */
        printf("\n Number is armstrong number.");

    }
    else{
        printf("\n Number is not armstrong number.");

    }
    
     
}