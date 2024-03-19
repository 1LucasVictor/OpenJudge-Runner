#include<stdio.h>
int main(void) {
	int w, h, x, y, r;
	scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);
	if (x + r <= h && x - r >= 0 && y + r <= h &&y - r >= 0) {
		printf("Yes\n");
	}
	else printf("No\n");
	return 0;
}