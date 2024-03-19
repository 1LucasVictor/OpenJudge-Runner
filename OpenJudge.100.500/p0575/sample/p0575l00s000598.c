#include<stdio.h>
int main() {
	int n, x, i, d, l,ans = 0;
	scanf("%d %d", &n, &x);
	for (i = 0; i < n; i++) {
		scanf("%d", &l);
		d += l;
		if (d <= x) {
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
