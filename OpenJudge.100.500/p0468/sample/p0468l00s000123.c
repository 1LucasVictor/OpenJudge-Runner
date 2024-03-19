#include <stdio.h>
#include<string.h>

int main(void)
{
    char s[]={};
    scanf("%s", &s);
    (strcmp(s,"ABC")==0) ? printf("ARC") : printf("ABC");
}