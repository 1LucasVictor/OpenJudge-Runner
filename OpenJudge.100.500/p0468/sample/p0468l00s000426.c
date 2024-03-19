#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s[]="ABC";
    char s1[]="ARC";
    char x[4];
    scanf("%s",x);
    if(strcmp(x,s)==0)
    printf("%s",s1);
    else
    printf("%s",s);
}
