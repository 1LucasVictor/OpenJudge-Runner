#include<stdio.h>
int main() {
	int W, H, x, y, r;

	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);

	if (W - (x + r) >= 0 && H - (y + r) >= 0 && x - r > 0 && y - r > 0)
		puts("Yes");
	else
		puts("No");

	return 0;
}