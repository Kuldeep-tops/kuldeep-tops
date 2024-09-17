#include<stdio.h>
int main(){
    int row,col,space;
    int n=5;
    for(row=1;row<=n;row++){
        for(space=n-1;space>=row;space--){
            printf("  ");
        }
        for(col=1;col<=2*row-1;col++){
            printf("* ");
        }
        printf("\n");
    } 
}