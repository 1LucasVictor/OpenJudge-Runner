#include <stdio.h>
int main(void) {
	int h, n, a, k[1000];
	scanf("%d %d", &h, &n);
	for (a = 0; a< n; a++) {
		scanf("%d", &k[a]);
		h = h - k[a];
		}
	if (h <= 0) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
	return 0;
}