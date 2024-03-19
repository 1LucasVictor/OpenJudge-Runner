#include <stdio.h>
#include <math.h>
typedef long long ll;

int main(void)
{
    ll a, ans;
    double b, tmp1, tmp2;
    scanf("%lld%lf", &a, &b);

    if (a != 0)
    {
        tmp1 = sqrt(a);
        tmp2 = sqrt(b);
        tmp1 *= tmp2;
    }
    printf("%lld\n", (ll)(tmp1 * tmp1));
    return 0;
}