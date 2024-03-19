#include <stdio.h>
#include <string.h>

int main()
{
    char s[5];
    char a=0,b=0,x;
    int countA=0,countB=0;
    int i,flag=0;

    scanf("%s",s);
    for(i=0;i<4;i++)
    {
        x=s[i];
        if(x==a)countA++;
        else if(x==b)countB++;
        else if(!a)
        {
            a=x; countA++;
        }
        else if(!b)
        {
            b=x; countB++;
        }
        else break;
    }
    if(countA==2&&countB==2)flag=1;
    if(flag)printf("Yes");
    else printf("No");
}