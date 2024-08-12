#include<stdio.h>
int main(){
    int color;

    printf("Enter your choice number: ");
    scanf("%d",&color);
    switch (color)
    {
    case 1:
    /* constant-expression */
        /* code */
        printf("Red\n");
        break;
    case 2:
        printf("Orange\n");
        break;
    case 3:
        printf("Yellow\n");
        break;
    case 4:
        printf("Green\n");
        break;
    case 5:
        printf("Blue\n");
        break;
    case 6:
        printf("Indigo\n");
        break;
    case 7:
        printf("Violet\n");
        break;

    default:
        printf("Invalid Choice Number!\n");
        printf("Thank You!");
        break;
    }
}