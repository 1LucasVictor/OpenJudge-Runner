#include<stdio.h>
#include<string.h>
int main()
{
    int len=0,i,a;
    char s[101];
    scanf("%s",&s);
    len=strlen(s);
    a=0;
    for(i=0;i<len;i++)
    {
        if(s[i]=='7')
        a=1;
    }
    if(a==1)
        printf("Yes\n");
    else
    printf("No\n");
    return 0;

}