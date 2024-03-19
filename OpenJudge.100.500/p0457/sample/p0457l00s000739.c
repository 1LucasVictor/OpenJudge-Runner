#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define rep(i,l,r) for(int i=l;i<r;i++)
#define MOD 10000007
typedef long long ll;

ll n, m, k, ans = 0;
ll a, sumA[200001], b, sumB[200001];

ll max(ll x, ll y) { return (x > y) ? x : y; }

int main() {
	scanf("%lld%lld%lld", &n, &m, &k);
	rep(i, 0, n) {
		scanf("%lld", &a);
		if (i == 0) sumA[0] = a;
		else sumA[i] = a + sumA[i - 1];
	}
	rep(i, 0, m) {
		scanf("%lld", &b);
		if (i == 0) sumB[0] = b;
		else sumB[i] = b + sumB[i - 1];
	}
	ll flag = m - 1;
	for (int i = 0; i <n; i++) {
		if (sumA[i] > k) break;
		for (int j = flag; j >= 0; j--) {
			if (sumA[i] + sumB[j] <= k) {
				ans = max(ans, i + j + 2);
				flag = j;
				break;
			}
		}
	}
	printf("%lld\n", ans);

	return 0;
}