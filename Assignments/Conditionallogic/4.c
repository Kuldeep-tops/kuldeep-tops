#include<stdio.h>
int main(){
    int num1,num2,res;
    char choice;
    do{
    	
    printf("Enter numbers:");
    scanf("%d %d",&num1,&num2);
    
      printf("Enter operation +, -, *, /, %% : ");
        scanf(" %c", &choice);
        
         switch(choice){   	
         
         case '+':
           res=num1+num2;
           printf("\n Addition = %d\n",res);
        break;
        
         case '-':
           res=num1-num2;
           printf("\n Subtraction = %d\n",res);
         break;
         
         case '*':
           res=num1*num2;
          printf("\n multiplication = %d\n",res);
        break;
        
        case '/':
          res=num1/num2;
         printf("\n Division = %d\n",res);
       break;
       
       case '%':
          res=num1%num2;
          printf("\n Modulo = %d\n",res);
       break;
             }    
    }while(choice==4);
    
    return 0;
}