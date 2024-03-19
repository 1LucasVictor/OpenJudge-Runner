#include<stdio.h>
int main()
{
    int a,b,c,d,e,g,f;
    scanf("%d %d",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    {
        if(c>d)
        {
            f=c;
        }
        else f=d;
    }
    {
        if(f>e)
        {
            g=f;
        }
        else g=e;
    }
    printf("%d\n",g);
    return 0;
}

