#include<stdio.h>
int main()
{
	 float area;
	 int b, h;
	 //get user value for input 
   printf("Enter b and h :");
   scanf("%d%d",&b ,&h);

   //area of triangle
      area =1 * b * h / 2;

   printf("\n\n Area of Triangle : %f",area);

    return 0;
}