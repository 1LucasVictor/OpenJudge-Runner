// ITP1_7_B:   How many ways?
// 2017.7.28

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	int n, x, max;
	int a, b, c;
	int ans;

	while (1) {
		scanf("%d%d", &n, &x);
		if (n == 0 && x == 0) break;

		ans = 0;
		max = x; if (max > n) max = n;
		for (a = 1; a <= max; a++) {
			for (b = a + 1; b <= max; b++) {
				c = x - a - b;
				if (c > b && c <= n) ans++;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}