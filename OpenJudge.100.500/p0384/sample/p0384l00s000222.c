#include<stdio.h>

int main()
{
    char c;
    while(1) {
        scanf("%c", &c);

        if(c == '\n') break;

        if('a' <= c && c <= 'z') printf("%c", c - 'a' + 'A');
        else if('A' <= c && c <= 'Z') printf("%c", c - 'A' + 'a');
        else printf("%c", c);
    }
    printf("\n");
}

