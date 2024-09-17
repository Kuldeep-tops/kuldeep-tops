// matrix calculation on 2 matrix to perform addition ,subtraction,multiplication.
#include<stdio.h>
int main(){
    int r,c,row,col;
    int arr1[20][20],arr2[20][20],add[20][20],sub[20][20],mul[20][20];

    printf("Enter number of rows and col:");
    scanf("%d %d",&r,&c);

    printf("Enter elements for 1 array:");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr1[row][col]);
        }
    }
    printf("Enter elements of 2 array:");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr2[row][col]);
        }
    }
    printf("\n array1:");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d ",arr1[row][col]);
        }
    }
    printf("\n array2");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d ",arr2[row][col]);
        }
    }
    // addition logic
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
           add[row][col]=arr1[row][col]+arr2[row][col];
     }
    }
    //printing addition result:
    printf("\n Summation of 2 matrix \n ");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d ",add[row][col]);
        }
    }
    // subtraction logic
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
           sub[row][col]=arr1[row][col]-arr2[row][col];
     }
    }
    printf("\n Subtraction of 2 matrix \n ");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d ",sub[row][col]);
        }
    }
    
    //multiplication logic:
        for(row=0;row<r;row++){   
            for(col=0;col<c;col++){
             mul[row][col]=0;
               for(int k=0;k<c;k++){
                   mul[row][col] += arr1[row][k] * arr2[k][col];
              }
          }
        }
        //for printing multiplication.
        printf("\n Multiplication");
        for(row=0;row<r;row++){
            printf("\n");
            for(col=0;col<c;col++){
                printf("%d ",mul[row][col]);
            }
        } 
}