#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned long long int a, ans;
    double b;
    scanf("%lld %lf", &a, &b);
    ans = a * (long long int)b;
    ans += (    (               (unsigned long long int)(b * (double)100)        % 100) * a)/ 100;
    printf("%llu", ans);
    
   return (0);
}
