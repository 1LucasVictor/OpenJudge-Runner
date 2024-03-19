#include <stdio.h>

int main() {
	int ans = -1, i, i100, i10, i1, j, m, n, flag = 0, s[5], c[5];
	scanf("%d %d", &n, &m);
	for (i = 0; i < m; i++) {
		scanf("%d %d", &s[i], &c[i]);
	}
	if (n == 1) {
		for (i = 0; i < m; i++) {
			if (c[i] != 0){flag = 1; break;}
		}
		if (flag == 0) {
			printf("0"); return 0;
		}
		flag = 0;
		for (i = 1; i <= 9; i++) {
			for (j = 0; j < m; j++) {
				if (s[j] == 1 && c[j] != i)flag = 1;
			}
			if (flag == 0) {
				ans = i;
				break;
			}
			flag = 0;
		}
	}
	else if (n == 2) {
		flag = 0;
		for (i = 10; i <= 99; i++) {
			i10 = i / 10;
			i1 = i % 10;
			for (j = 0; j < m; j++) {
				if (s[j] == 1 && c[j] != i10)flag = 1;
				if (s[j] == 2 && c[j] != i1)flag = 1;
			}
			if (flag == 0) {
				ans = i;
				break;
			}
			flag = 0;
		}
	}
	else {
		flag = 0;
		for (i = 100; i <= 999; i++) {
			i100 = i / 100;
			i10 = (i - i100 * 100) / 10;
			i1 = i % 10;
			for (j = 0; j < m; j++) {
				if (s[j] == 1 && c[j] != i100)flag = 1;
				if (s[j] == 2 && c[j] != i10)flag = 1;
				if (s[j] == 3 && c[j] != i1)flag = 1;
			}
			if (flag == 0) {
				ans = i;
				break;
			}
			flag = 0;
		}
	}
	printf("%d", ans);
	return 0;
}