#include <stdio.h>

int main(void) {

	int n;
	int min, max;
	int i, j, k, l;
	int cnt;
	
	while (scanf("%d", &n) != EOF) {

		cnt = 0;
		if (n < 37) {
			for (i = 0; i < 10; ++i) {
				if (i > n) break;
				if (n - i > 9 * 3) continue;
				for (j = 0; j < 10; ++j) {
					if ((i + j > n)) break;
					if (n - i - j > 9 * 2) continue;
					for (k = 0; k < 10; ++k) {
						if ((i + j + k > n)) break;
						if (n - i - j - k > 9) continue;
						cnt++;
						/* for (l = 0; l < 10; ++l) { */
						/* 	if (i + j + k + l == n) { */
						/* 		++cnt; */
						/* 		break; */
						/* 	} */
						/* } */
					}
				}
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}