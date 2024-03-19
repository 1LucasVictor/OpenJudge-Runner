#include <stdio.h>

int main(void)
{
	int w, h, x, y, r;

	scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);

	if (((r + x) > w) || ((r + y) > h)) {
		printf("No\n");
	}
	else {
		printf("Yes\n");
	}

	return 0;

}