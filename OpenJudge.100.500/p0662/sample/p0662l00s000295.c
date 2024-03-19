#include<stdio.h>
int main()
{
    int a,b,c,d,p,sum,q;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(b<c||d<a)
    {
        sum=0;
    }
    else
    {
       if(b>d)
        p=d;
        else
        p=b;
        if(a>c)
            q=a;
        else
            q=c;

        sum=p-q;

    }
    printf("%d\n",sum);
    return 0;
}
