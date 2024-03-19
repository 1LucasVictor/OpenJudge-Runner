#include <stdio.h>
int find_maximum(int list[], int length) {
	int m = 0, i, j, k, t;
	for (i = 0; i < length; i++) {
		for (j = 1 + i; j < length + 1; j++) {
			t = 0;
			for (k = i; k < j; k++) {
				t += list[k];
			}
			if (t > m)
				m = t;
		}
	}
	return m;
}
int main() {
	int n, i;
	while (1) {
		scanf(" %d", &n);
		if (n <= 0)
			break;

		int list[n];
		for (i = 0; i < n; i++) {
			scanf(" %d", &list[i]);
		}
		printf("%d\n", find_maximum(list, n));
	}
	return 0;
}