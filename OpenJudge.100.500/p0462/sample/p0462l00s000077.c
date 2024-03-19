#include <stdio.h>
#include <stdlib.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
typedef long long ll;

int main(void)
{
    ll a, ans;
    double b;
    scanf("%lld%lf", &a, &b);

    ans = (double)a * b;
    printf("%lld\n", ans);
    return 0;
}