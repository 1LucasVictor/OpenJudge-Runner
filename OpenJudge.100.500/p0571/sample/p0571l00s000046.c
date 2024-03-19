#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    if(a*n<b)printf("%d",n*a);
    else printf("%d",b);
    return 0;
}