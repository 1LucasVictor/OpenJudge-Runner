#include <stdio.h>

long long a,b,c,tmpa,tmpb;

int main()
{
    while(scanf("%lld %lld",&a,&b) != EOF)
    {
        if(a<0) a = -a;
        if(b<0) b = -b;
        tmpa = a;
        tmpb = b;
        c=a;
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
        tmpa = tmpa/c;
        printf("%lld %lld\n",c,tmpa*tmpb);
    }
    return 0;
}