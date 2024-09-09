#include <stdio.h>
int main()
{
   int  student,apple;
   float total;
 
 //accept no. of student from user
 
    printf("Enter no of students and apple : ");
    scanf("%d%d",&student,&apple);
    
  
//total no. of apple display

  total = student * apple;  
   printf("total no of apple is=%.2f",total);
}