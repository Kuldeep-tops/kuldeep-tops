#include<stdio.h>
int main(){
    int row,col;
    for(row=0;row<=4;row++){
        for(col=0;col<=row;col++){
            if((row+col)%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
        }
    printf("\n");
    }
}