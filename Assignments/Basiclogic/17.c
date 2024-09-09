#include<stdio.h>
int main(){
	
	float salary, years;
	
	printf("Enter your salary: ");
 scanf("%d", &salary);
 
 printf("Enter life insurance policy term for years: ");
 scanf("%d", &years);
 
 printf("Your Yearly Premium: %8.2f\n", salary/(years)); 
 
 return 0;
	
}