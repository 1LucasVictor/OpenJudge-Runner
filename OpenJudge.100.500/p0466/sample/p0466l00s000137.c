#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int s[10],t[11],i,ls,lt;
    scanf("%s",s);
    scanf("%s",t);
    ls=strlen(s);
    lt=strlen(t);
    ls=ls+1;
    if(ls==lt)
    {
        for(i=0;i<ls;i++)
        {
        if(s[i]!=t[i])
        {
            break;
            printf("No");
        }
        else
            continue;
        }
        printf("Yes");
    }
    else
        printf("No");
    return 0;
}
