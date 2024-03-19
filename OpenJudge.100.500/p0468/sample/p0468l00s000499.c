#include<stdio.h>
#include<string.h>
int main()
{
    char s[5];
    scanf("%s",&s);
    if(strcmp(s,"ABC")==0)
    printf("ARC");
    else printf("ABC");
    return 0;
}