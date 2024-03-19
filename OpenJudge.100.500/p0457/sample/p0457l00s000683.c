#include <stdio.h>
typedef long long ll;
int a[200000], b[200000];
ll bsum[200010] = {0};
int binarySearch(int key, int num) {
	int ok = -1, ng = num, mid;
	while (ng - ok > 1) {
		mid = (ng + ok) / 2;
		if (bsum[mid] <= key)
			ok = mid;
		else
			ng = mid;
	}
	return ng;
}
int main() {
	int n, m, k;
	int ans = 0;
	scanf("%d%d%d", &n, &m, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < m; i++) {
		scanf("%d", &b[i]);
		// b[i]まで読んだ時の所要時間
		if (i != 0)
			bsum[i] = bsum[i - 1] + b[i];
		else {
			bsum[i] = b[i];
		}
	}
	// for (int i = 0; i < m; i++) {
	// 	printf("%lld ", bsum[i]);
	// }
	// printf("\n");
	ll sum = 0;
	for (int i = -1; i < n; i++) {
		if (i != -1)
			sum += a[i];
		if (sum > k) {
			break;
		}
		int r = binarySearch(k - sum, m);
		if (i + 1 + r > ans) {
			ans = i + 1 + r;
		}
	}
	printf("%d\n", ans);
	return 0;
}