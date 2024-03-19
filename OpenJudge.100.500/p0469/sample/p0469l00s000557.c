#include<stdio.h>
int main()
{
    int n, a,b,c,s;
    scanf("%d %d %d",&n,&a,&b);
    s=a/n;
    s=(a+1)*n;
    if(s>=b)
        printf("OK\n");
    else printf("NG\n");
    return 0;
}