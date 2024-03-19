#include <stdio.h>
#include <stdlib.h>

int main() {
	int W, H, r, x, y;
	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
	int l = x - r;
	int r1 = x + r;
	int u = y + r;
	int d = y - r;
	if (l >= 0 && r1 <= W && d >= 0 && u <= H)
		printf("Yes\n");
	else
		printf("No\n");
}
