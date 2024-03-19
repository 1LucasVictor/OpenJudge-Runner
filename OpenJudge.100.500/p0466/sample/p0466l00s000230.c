#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[10];
    char t[11];
    scanf("%s",s);
    scanf("%s",t);
    int i=0;
    int flag=0;
    for(i=0;i<strlen(s);i++)
    {
        if(t[i]!=s[i] || s[i]<97 || s[i]>122)
            flag=1;
    }
    int len=0;
    len=strlen(t)-strlen(s);
    if(flag==0 && len==1 && t[i]>=97 && t[i]<=122)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
