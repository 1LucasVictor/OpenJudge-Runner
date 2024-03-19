#include<stdio.h>
int main()
{
    int x,a,b,t,n,c,i;
    scanf("%d",&x);
    if(x>=500)
    {
        a=x/500;
        x=x%500;
        b=a*1000;
        x=x/5;;
        c=x*5;
        t=c+b;
        printf("%d",t);
    }
    else
    {
        a=x/5;
        b=a*5;
        printf("%d\n",b);
    }
}
