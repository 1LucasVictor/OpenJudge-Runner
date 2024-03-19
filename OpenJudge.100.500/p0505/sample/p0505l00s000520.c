#include <stdio.h>


int main(void) {
	int h, n, a, ans;
	ans = 0;
	scanf("%d %d", &h, &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &a);
		ans += a;
	}
	printf(ans >= h ? "Yes" : "No");

	return 0;
}