#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=a*b;
    if(d>c)
    {
        printf("%d\n",c);
    }
    else
    {
        printf("%d\n",d);
    }
    return 0;
}
