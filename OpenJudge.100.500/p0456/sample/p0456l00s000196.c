#include<stdio.h>
int main()
{
    int count=0,i;
    char s[50],t[50];
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