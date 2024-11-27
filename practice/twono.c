#include<stdio.h>
int main(){
    int a,b;
    char c;
    float marks;
    double sal;
    //using data type in program
    printf("\n Enter a number:");
    scanf("%c",&c);
    printf("\n Character=%c",c);
    printf("\n Enter numbers:");
    scanf("%d %d",&a,&b);
    printf("\n a=%d \n b=%d",a,b);
    printf("\n Enter salary:");
    scanf("%f",&sal);
    printf("\n Salary=%f",sal);
    printf("\n Enter marks:");
    scanf("%lf",&marks);
    printf("\n Marks=%lf",marks);
}