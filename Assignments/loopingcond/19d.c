#include <stdio.h>  
  
int main()  
{  
    //int n=6,m=1;  
    int row=6,col=1,i,j;
for( i=1;i<=row;i++)  
{  
  for( j=1;j<=i;j++)  
  {  
    printf("*");  
  }  
  printf("\n");  
}  
 for( i=row-1;i>=1;i--)  
 {  
   for( j=1;j<=i;j++)  
   {  
     printf("*");  
   }  
   printf("\n");  
 }    
     
    return 0;  
}