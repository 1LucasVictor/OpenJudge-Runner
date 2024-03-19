#include<stdio.h>
int main()
{
    int n,m,c,d,e;
    scanf("%d %d",&n,&m);
    c=n+m;
    d=n-m;
    e=n*m;
    if(c>d && c>e)
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
