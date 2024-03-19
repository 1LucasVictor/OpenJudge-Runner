#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define rep(i,l,r) for(int i=l;i<r;i++)
#define MOD 10000007
typedef long long ll;

ll n, m, k, ans = 0;
ll a, sumA[200001], b,sumB[200001];

ll max(ll x, ll y) { return (x > y) ? x : y; }

ll binary(ll x) {
	ll l = 0, r = m;
	while (r - l > 1) {
		ll mid = (r + l) / 2;
		if (sumA[x]+sumB[mid]<=k) l = mid;
		else r = mid;
	}
	return r;
}

int main() {
	scanf("%lld%lld%lld", &n, &m, &k);
	rep(i, 0, n) {
		scanf("%lld", &a);
		if (i == 0) sumA[0] = a;
		else sumA[i] = a+sumA[i-1];
	}
	rep(i, 0, m) {
		scanf("%lld", &b);
		if (i == 0) sumB[0] = b;
		else sumB[i] = b + sumB[i - 1];
	}
	rep(i, 0, n) {
		if (sumA[i] <= k) {
			ans = max(binary(i) + i +1, ans);
		}
	}
	printf("%lld\n", ans);

	return 0;
}