#include <stdio.h>
int main() {
	int a, b, c, k, ans = 0;
	scanf("%d%d%d%d", &a, &b, &c, &k);
	if (a >= k) {
		ans = k;
	} else if (a + b >= k) {
		ans = a;
	} else {
		ans = a - (k - a - b);
	}
	printf("%d\n", ans);
	return 0;
}