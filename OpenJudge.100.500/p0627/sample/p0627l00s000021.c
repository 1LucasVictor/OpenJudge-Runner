#include<stdio.h>
int main()
{
    signed int n;
    int m,c,d,e;
    scanf("%d %d",&n,&m);
    c=n+m;
    d=n-m;
    e=n*m;
    if(c>d && c>e)
    {
        printf("%d\n",c);
    }
    else if(c==d || d==e || e==c)
    {
        printf("%d\n",c);
    }
    else if(d>c && d>e)
    {
        printf("%d\n",d);
    }
    else
        printf("%d\n",e);
    return 0;
}
