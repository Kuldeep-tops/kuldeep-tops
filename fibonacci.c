//fibonacci series numbers 0,1,1,2,3,5,8,13,21,34,35....
#include<stdio.h>
int main(){
    int a=0,b=1,fib=0,num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("%d,%d, ",a,b);
    int count=2;
    while(count<num){
        fib=a+b;
        a=b;
        b=fib;
        count++;
        printf("%d, ",fib);
    }
    
}
// #include<stdio.h>
// int main(){
//     int n1=0,n2=1,temp=0,num;
//     printf("Enter number: ");
//     scanf("%d",&num);
//     printf("%d,%d, ",n1,n2);
//     int count=2;
//     while (count<num){
//         /* code */
//         temp=n1+n2;
//         n1=n2;
//         n2=temp;
//         count++;
//         printf("%d, ",temp);
//     }
    
// }