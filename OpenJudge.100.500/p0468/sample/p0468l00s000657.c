#include<stdio.h>
#include<string.h>
int main (void)
{
    char S[5];
    scanf("%s",S);
    if(strcmp(S,"ARC"))printf("ARC\n");
    else printf("ABC\n");
}