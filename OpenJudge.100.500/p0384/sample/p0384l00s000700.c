#include <stdio.h>
#include <ctype.h>

int main()
{
    int ch;
    while((ch=getchar()) != EOF) {
        if(isupper(ch)) putchar(tolower(ch));
        else if(islower(ch)) putchar(toupper(ch));
        else putchar(ch);
        if(ch=='\n') break;
    }
    return 0;
}