#include<stdio.h>
//#define pi 3.14
int main(){
    int redius;
    float pi=3.14;
    float area;
    printf("Enter radius:");
    scanf("%d",&redius);
    area=pi*redius*redius;
    printf("Area of circle:%d",&area);

}