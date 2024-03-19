/*
 * main.c
 *
 *  Created on: 2020/07/27
 *      Author: 113896
 */
#include <stdio.h>

int main() {

	int n, x;
	while (1) {
		scanf("%d%d", &n, &x);
		if (n == 0 && x == 0) break;

		int k;
		int ans = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = i+1; j <= n; j++) {
				k = x - i - j;
				if (k > j && k <= n) {
					ans++;
				}
			}
		}
		printf("%d\n", ans);
	}

	return 0;
}


