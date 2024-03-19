#include<stdio.h>
#include<string.h>
int main()
{
    char s[10],t[20];
    scanf("%s",s);
    scanf("%s",t);
    int i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]!=t[i])
        {
            printf("No");
            return 0;
        }
    }
    if(i==strlen(s))
    {
        printf("Yes");
    }
    return 0;
}
