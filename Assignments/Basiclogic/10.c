#include <stdio.h>  
int main(){
	  float w,l,h;
	  float A;
	  
	  printf("Enter a width, length, height rectangle : ");
	  scanf("%f%f%f",&w,&l,&h);
	  
	 A=2*(w*l+h*l+h*w);
	 
	 printf("Surface area of rectanguler prism is: %f",A);
	 
}