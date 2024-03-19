#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    {
    if(c>d&&c>e)printf("%d\n",c);
    else if(d>c&&d>e)printf("%d\n",d);
    else if(e>c&&e>d)printf("%d\n",e);
    else if(a==0)printf("%d\n",a);
    else if(b==0)printf("%d\n",b);
    }
    return 0;
}