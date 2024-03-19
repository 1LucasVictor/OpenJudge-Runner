#include <stdio.h>

long long a,b,c,tmp;

int main()
{
    while(scanf("%lld %lld",&a,&b) != EOF)
    {
        if(a<0) a = -a;
        if(b<0) b = -b;
        tmp = a*b;
        while(a != b)
        {
            if(a>b)
            {
                c = a - b;

                a = c;
            }
            else
            {
                c = b - a;

                b = c;
            }
        }
        printf("%lld %lld\n",c,tmp/c);
    }
    return 0;
}