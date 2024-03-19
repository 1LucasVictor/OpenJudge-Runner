#include <stdio.h>
#include <ctype.h>
 
int main(void)
{
    char ch;
    while(1){
        scanf("%c", &ch);
        if(isupper(ch)) {
            ch = ch + 32;
        } else if(islower(ch)) {
            ch = ch - 32;
        }
        printf("%c",ch);
            if ( ch == '\n' ) break;
    }   
    return 0;
}