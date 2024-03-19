#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    scanf("%d%d",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;

    if(c>d && c>e)
        printf("%d\n",c);
    else if(d>c && d>e)
        printf("%d\n",d);
    else
        printf("%d\n",e);
    return 0;
}
