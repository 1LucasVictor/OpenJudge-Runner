#include<stdio.h>
int main()
{
    int count=0,i;
    char s[200000],t[200000];
    scanf("%s%s",s,t);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=t[i])
        {
            s[i]=t[i];
            count++;
        }
    }
    printf("%d",count);
    return 0;

}