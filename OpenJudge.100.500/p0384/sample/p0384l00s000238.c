#include<string.h>
#include<stdio.h>
int main()
{
    char s[1200];
    int t,i;
    scanf("%[^\n]",s);
    t=strlen(s);
    for(i=0;i<t;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
        else
        {
            s[i]=s[i];
        }
    }
    printf("%s\n",s);
}

