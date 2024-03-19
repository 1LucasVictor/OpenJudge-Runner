#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],t[20];
    scanf("%s",s);
    scanf("%s",t);
    int i;
    int n=strlen(s);
    s[n]=t[n];
    for(i=0;i<strlen(t);i++)
    {
        if(s[i]!=t[i])
        {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}
