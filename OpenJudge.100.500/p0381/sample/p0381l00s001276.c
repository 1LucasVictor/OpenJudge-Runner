#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a = 1, b = 2, c = 3;
	int n, x;
	int cnt = 0;

	while (1) {
		scanf("%d %d", &n, &x);

		if (n == 0 && x == 0) {
			break;
		}

		for (a = n; a >= 1; a--) {
			for (b = a - 1; b >= 1; b--) {
				for (c = b - 1; c >= 1; c--) {
					if (a + b + c == x) {
						cnt++;
					}
				}
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}
