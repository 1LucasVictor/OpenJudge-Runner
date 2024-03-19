#include<stdio.h>
#define rep(i,l,r) for(int i=l;i<r;i++)
typedef long long ll;

ll max(ll x, ll y) { return (x > y) ? x : y; }

int main() {
    ll n, m, k,sumA[200001], sumB[200001];
    scanf("%lld%lld%lld", &n, &m, &k);
    ll a, b;
    sumA[0] = sumB[0] = 0;
    rep(i, 0, n) {
        scanf("%lld", &a);
        sumA[i + 1] = sumA[i] + a;
    }
    rep(i, 0, m) {
        scanf("%lld", &b);
        sumB[i + 1] = sumB[i] + b;
    }
    ll ans = 0,j=m;
    rep(i,0,n + 1) {
        if (k<sumA[i]) {
            break;
        }
        while (sumA[i]+sumB[j]>k) {
            j--;
        }
        ans = max(ans, i + j);
    }
    printf("%lld\n", ans);
    return 0;
}
