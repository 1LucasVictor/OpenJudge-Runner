#include <stdio.h>

int main(void) {
	int n = 0, m = 0, k = 0;
	int a[200000] = { 0 };
	int b[200000] = { 0 };
	int cost = 0;
	int result = 0;

	scanf("%d", &n);
	scanf("%d", &m);
	scanf("%d", &k);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < m; i++) {
		scanf("%d", &b[i]);
	}

	int a_i = 0;
	int b_i = 0;
	int a_end = 0;
	int b_end = 0;
	while (cost <= k) {
		if (a[a_i] >= b[b_i] && b_end == 0) {
			cost += b[b_i];
			if (b_i == m - 1) {
				b_end = 1;
				b[b_i] = 10000000000;
			}
			else {
				b_i++;
			}
		}
		else if (a[a_i] < b[b_i] && a_end == 0) {
			cost += a[a_i];
			if (a_i == n - 1) {
				a_end = 1;
				a[a_i] = 10000000000;
			}
			else {
				a_i++;
			}
		}
		else if (a_end == 1 && b_end == 1) {
			result++;
			break;
		}
		result++;
	}
	result--;

	printf("%d", result);

	return 0;
}