#include <stdio.h>
int main()
{
    long long  n1, n2;
    scanf("%lld %lld",&n1,&n2);

    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("%lld",n1);
}

