#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    
    while((ch=getchar())!=EOF){
        if(isupper(ch)){
            putchar(tolower(ch));
        }
        else{
            putchar(toupper(ch));
        }
    }
    
    return 0;
}