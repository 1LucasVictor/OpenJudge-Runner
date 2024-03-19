#include<stdio.h>
#include<string.h>
int main()
{
    char a[256],b[256];
    scanf("%s%s",a,b);
    int n=strlen(a);
    int r=0;
    for(int i=0;i<n;++i)
    {
    r+=(a[i]!=b[i]);


    }
    printf("%d",r);
    return 0;
}