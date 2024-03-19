#include <stdio.h>

int main ()
{
    long long x,t,f,h;
    while (scanf ("%lld",&x)  !=EOF)
    {
        t=x/500;
        h=t*1000;
        f=(x-t*500)/5;
        h=h+5*f;
        printf("%d\n",h);
    }
    return 0;
}
