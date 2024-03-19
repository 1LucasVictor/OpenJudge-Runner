#include <stdio.h>
#include <ctype.h>
 
int main(void) {
     
    char c;
    int i;
    
    i = 'a'-'A';
     
    for(;;){
        scanf("%c",&c);
        if ('a' <= c && c<= 'z') 
            printf("%c",c-i);
        else if ('A' <= c && c<= 'Z')
            printf("%c",c+i);
        else if (c == '\n') 
            break;
        else
            printf("%c",c);
    }
     
    printf("\n");
    return 0;
}