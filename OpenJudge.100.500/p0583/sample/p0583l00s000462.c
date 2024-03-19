#include <stdio.h>
#include <stdlib.h>
#define min(X, Y) ((X) < (Y) ? (X) : (Y))
typedef long long ll;

ll n;
ll a, c;
ll b, d;
char str[200005];

_Bool f(ll s, ll t);
_Bool g(ll s, ll t);

int main()
{
    scanf("%lld %lld %lld %lld %lld", &n, &a, &b, &c, &d);
    scanf("%s", str + 1);

    if (c < d) {
        if (f(a, c + 1) &&
            f(b, d + 1)) {
            puts("Yes");
        }
        else {
            puts("No");
        }
    }
    else {
        if (f(a, c + 1) &&
            f(b, d + 1) &&
            g(b, d + 1)) {
            puts("Yes");
        }
        else {
            puts("No");
        }
    }

    return 0;
}

_Bool f(ll s, ll t)
{
    for (ll i = s; i < t - 1; i++) {
        if (str[i] == '#' &&
            str[i + 1] == '#') {
            return 0;
        }

        if (str[i] == '#' &&
            str[i - 1] == '#') {
            return 0;
        }
    }

    return 1;
}

_Bool g(ll s, ll t)
{
    for (ll i = s; i < t; i++) {
        if (str[i] == '#') continue;

        if (str[i - 1] == '.' &&
            str[i] == '.' &&
            str[i + 1] == '.') return 1;
    }
    
    return 0;
}
