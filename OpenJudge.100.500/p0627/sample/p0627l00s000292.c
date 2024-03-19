#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d", &a, &b);
    c=a+b;
    d=a-b;
    e=a*b;
    if(c>e && e>d && c>e || c>d && c>e && e>d || c==0)
    {
        printf("%d\n",c);
    }
    else if (d>c && d>e && c>e || d>c && d>e && e>c || d==0)
    {
        printf("%d\n",d);
    }
    else if(e>d && e>c && d>c || e>c && e>d && c>d || e==0)
    {
        printf("%d\n",e);
    }
    return 0;
}
