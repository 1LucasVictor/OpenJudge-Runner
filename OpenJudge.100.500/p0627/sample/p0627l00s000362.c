#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,m,n,k;
    scanf("%d %d",&a,&b);
    -1000<=a,b<=1000;
    if(a==0&&b==0)
    {
        printf("0");
    }
    m=a+b;
    n=a-b;
    k=a*b;
    if(m>n&&m>k)
    {
        printf("%d",m);
    }
    if(n>m&&n>k)
    {
        printf("%d",n);
    }
    if(k>m&&k>n)
    {
        printf("%d",k);
    }
    return 0;
}
