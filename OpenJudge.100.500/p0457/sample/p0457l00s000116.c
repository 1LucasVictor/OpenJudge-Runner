#include<stdio.h>
int main() {
	int n, m, k;
	int a[200001] = { 0 }, b[200001] = { 0 };

	scanf("%d%d%d", &n, &m, &k);

	for (int i = 0; i < n; i++) {
		int tmp;
		scanf("%d", &tmp);
		a[i + 1] = tmp + a[i];
	}
	for (int i = 0; i < m; i++) {
		int tmp;
		scanf("%d", &tmp);
		b[i + 1] = tmp + b[i];
	}

	int result = 0;
	for (int i = 0; i <= n; i++) {
		int tmp = i;
		while (a[i] + b[m - tmp] > k) {
			tmp++;
		}
		result = (i + m - tmp) > result ? (i + m - tmp) : result;
	}

	printf("%d", result);
	return 0;
}
