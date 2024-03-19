#include <stdio.h>
#include <ctype.h>
 
 
int main(){
     
    char ch;
     
    while(1) {
        scanf("%c", &ch);
         
        if(islower(ch)){
            printf("%c",toupper(ch));
        }
        else{
            printf("%c",tolower(ch));
        }
         
        if(ch=='\n') break;
         
    }
    return(0);
}