#include <stdio.h>

void check(int w, int h, int x, int y, int r) {
	if (x - r >= 0 && x + r <= w && y - r >= 0 && y + r <= h) printf("Yes\n");
	else printf("No\n");
	return;
}

int main(void)
{
	int w, h, x, y, r;
	scanf("%d%d%d%d%d", &w, &h, &x, &y, &r);
	check(w, h, x, y, r);
	return 0;
}
