#include <stdio.h>
#include <string.h>
int main() {
   
   char str[30]=" ";
    int i=0;
    
    scanf("%s",str);
    
    while (str[i]!='\0'){
        
        printf("%c ",str[i]);
        
        i++;
    }
    
    return 0;
}