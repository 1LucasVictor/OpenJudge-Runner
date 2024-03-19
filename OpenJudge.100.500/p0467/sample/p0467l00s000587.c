#include<stdio.h>
#include<math.h>
#include<string.h>

int main(void) {
	int a, b, c, k, i;
	int ans = 0;
	scanf("%d%d%d%d", &a, &b, &c, &k);
	for (i = 1; i <= k; i++) {
		if (a > 0) {
			ans = ans + 1;
			a = a - 1;
		}
		else if (b > 0) {
			b = b - 1;
		}
		else if (c > 0) {
			ans = ans - 1;
			c = c - 1;
		}
	}
	printf("%d", ans);
	return 0;
}