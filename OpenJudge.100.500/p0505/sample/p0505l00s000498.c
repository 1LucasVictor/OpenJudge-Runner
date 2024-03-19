#include <stdio.h>

int main() {
	int h, n, a, x;

	scanf("%d%d", &h, &n);
	x = 0;
	while (n--) {
		scanf("%d", &a);
		x += a;
	}
	printf(x >= h ? "Yes\n" : "No\n");
	return 0;
}
