#include<stdio.h>
#include<string.h>
int main(void)
{
    char s[100005];
    int n,i,c1=0,c0=0;
    scanf("%s",s);
    n = strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i] == '1')
            c1++;
        if(s[i] == '0')
            c0++;
    }
    printf("%d",2*(c1>c0?c0:c1));

    return 0;
}
