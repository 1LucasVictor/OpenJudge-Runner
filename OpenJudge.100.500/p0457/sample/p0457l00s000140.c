#include<stdio.h>

int main() {
	long long  n, m, k, a[200000], b[200000], alen = 0, blen = 0, count = 0;
	scanf("%lld%lld%lld", &n, &m, &k);
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
	}
	for (int i = 0; i < m; i++) {
		scanf("%lld", &b[i]);
	}
	for (int i = 0; alen < n|| blen < m; i++) {
		int flag = 0;
		if (sum + a[alen] > k || alen >= n) flag++;
		else {
			sum += a[alen];
			count++;
			alen++;
		}
		if (sum + b[blen] > k || blen >= m) flag++;
		else {
			sum += b[blen];
			count++;
			blen++;
		}
		if (flag == 2) {
			printf("%lld\n", count);
			return 0;
		}
	}
	printf("%lld", count);

	return 0;
}
