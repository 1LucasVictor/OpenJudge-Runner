#include<stdio.h>

int main() {
	long long  n, m, k, a[200000], b[200000], alen = 0, blen = 0, count = 0,sum=0;
	scanf("%lld%lld%lld", &n, &m, &k);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
	}
	for (int i = 0; i < m; i++) {
		scanf("%lld", &b[i]);
	}
	for (int i = 0; alen < n || blen < m; i++) {
		int flag = 0;
		if (sum + a[alen] <= k&&alen<n) {
			sum += a[alen];
			count++;
		}
		else flag++;
		if (sum + b[blen] <= k && blen < m) {
			sum += b[blen];
			count++;
		}
		else flag++;
		if (flag == 2) {
			printf("%lld", count);
			return 0;
		}
	}
	printf("%lld", count);

	return 0;
}
