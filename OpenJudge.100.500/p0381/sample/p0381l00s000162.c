#include <stdio.h>

int main(void) {
	int limit = 10000;
	int n[limit], x[limit], r[limit], count, m;
	for (count = 0; count < limit; count++) {
		scanf("%d %d", &n[count], & x[count]);
		if (n[count] == 0 && x[count] == 0) {
			break;
		}
	}
	for (int i = 0; i < count; i++) {
		r[i] = 0;
		if (6 <= x[i]) {
			for (int j = 1; j < n[i] - 1; j++) {
				for (int k = n[i]; k > j + 1; k--) {
					m = x[i] - k - j;
					if (m > j && m < k) {
						r[i]++;
					}
				}
			}
		}
	}
	for (int i = 0; i < count; i++) {
		printf("%d\n", r[i]);
	}
	return 0;
}

