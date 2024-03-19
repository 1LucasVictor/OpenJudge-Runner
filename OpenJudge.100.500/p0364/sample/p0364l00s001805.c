#include <stdio.h>

int main(void) {
	int w, h,x,y,r;
	scanf("%d", &w);
	scanf("%d", &h);
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &r);
	if ((x - r) < 0 && (x + r) > w) {
		printf("No\n");
	}
	else if ((y - r) < 0 && (y + r) > h) {
		printf("No\n");
	}
	else {
		printf("Yes\n");
	}

	return 0;
}