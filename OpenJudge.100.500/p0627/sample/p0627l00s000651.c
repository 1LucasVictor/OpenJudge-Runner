#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    if(c>d)
    {
        if(c>e)
            printf("%d",c);
        else
            printf("%d",e);
    }
    else
        if(d>e)
        printf("%d",d);
    else
        printf("%d",e);
    return 0;
}
