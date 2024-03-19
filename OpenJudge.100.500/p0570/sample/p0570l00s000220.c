#include <stdio.h>
int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if(!((a-b)&1))
        printf("%lld\n", (a+b)/2);
    else
        printf("IMPOSSIBLE\n");
    return 0;
}