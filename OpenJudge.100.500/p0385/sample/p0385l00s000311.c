#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s[1000];
    int t,i,p=0;
    scanf("%s",s);
    while (s[0]!='0')
    {
    t=strlen(s);
    for(i=0;i<t;i++)
    {
       p=p+s[i]-'0';
    }
    printf("%d\n",p);
    p=0;
    scanf("%s",s);
    }
    return 0;
}
