#include <stdio.h>

int main(void) {
	int W, H, x, y, r;
	if (scanf("%d%d%d%d%d", &W, &H, &x, &y, &r) != 5) return 1;
	puts(0 + r <= x && x <= W - r && 0 + r <= y && y <= H - r ? "Yes" : "No");
	return 0;
}

