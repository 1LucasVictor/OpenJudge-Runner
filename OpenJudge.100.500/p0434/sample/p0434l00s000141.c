#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

typedef long long ll;

ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }

ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

ll asc(const void* a, const void* b) { return *(ll*)a - *(ll*)b; }

ll dsc(const void* a, const void* b) { return *(ll*)b - *(ll*)a; }

int main() {
    ll n;
    scanf("%lld", &n);
    if (n >= 30) printf("Yes");
    else printf("No");
    return 0;
}