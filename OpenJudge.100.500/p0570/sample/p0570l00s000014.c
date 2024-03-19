#include<stdio.h>
int main()
{
    long long int a, b, k;
    scanf("%lld %lld", &a, &b);

    k = (a+b)/2;

    if(abs(a-k) == abs(b-k))
    {
        printf("%lld", k);
    }

    else
    {
        printf("IMPOSSIBLE");
    }

    return 0;
}
