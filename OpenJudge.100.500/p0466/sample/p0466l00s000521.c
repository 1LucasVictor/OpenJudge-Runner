#include<stdio.h>
#include<string.h>
int main()
{
    int l,i,flag=1;
    char s[11],t[11];
    scanf("%s",s);
    scanf("%s",t);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]!=t[i])
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
}
