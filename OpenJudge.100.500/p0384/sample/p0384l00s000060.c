#include <stdio.h>

int main()
{
    char ch;
    
    while(scanf("%c", &ch) != EOF){
        if (ch == '\n') break;
        else if ('a' <= ch && ch <= 'z') printf("%c", toupper(ch));
        else if ('A' <= ch && ch <= 'Z') printf("%c", tolower(ch));
        else printf("%c", ch);
    }
    printf("\n");
    return 0;
}