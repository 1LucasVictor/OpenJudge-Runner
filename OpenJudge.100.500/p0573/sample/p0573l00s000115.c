#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[4];
    char a,b;
    int flag=0;
    scanf("%s",s);
    if(s[0]==s[1]&&s[2]==s[3])flag=1;
    if(s[0]==s[2]&&s[1]==s[3])flag=1;
    if(s[0]==s[3]&&s[1]==s[2])flag=1;

    if(flag)printf("Yes");
    else printf("No");
}

