#include <stdio.h>
int main() {
	int a, b, c, d, ans = 0;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	for (int i = 0; i < 100; i++) {
		if (a <= i && i < b && c <= i && i < d) {
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}