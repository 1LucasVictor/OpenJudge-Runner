#include <stdio.h>

int main()
{
    long long int x, h_1000, h_5, rem;
    scanf("%lld", &x);
    h_1000=x/500;
    h_1000*=1000;
    rem=x%500;
    h_5=rem/5;
    h_5*=5;
    printf("%lld\n", h_1000+h_5);
    return 0;
}
