#include<stdio.h>
int main()
{
    int n, a,b,c,s;
    scanf("%d %d %d",&n,&a,&b);
    if(a>b)
    {
        c=a;
        a=b;
        b=c;
    }
    s=a/n;
    s=(a+1)*n;
    if(s>=b)
        printf("OK\n");
    else printf("NG\n");
    return 0;
}