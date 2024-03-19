#include<stdio.h>
int main()
{
    int a,b,c,n,t;
    scanf("%d",&n);
    if(n>=500)
    {
        a=n/500;
        n=n%500;
        b=a*1000;
        n=n/5;
        c=n*5;
        t=c+b;
        printf("%d\n",t);
    }
    else
    {
        a=n/5;
        b=a*5;
        printf("%d\n",b);
    }
    return 0;
}
