#include <stdio.h>

int main(void)
{
	int w, h, x, y, r;

	scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);
	if(r <= 0)
		return -1;
	if((r <= x) && (x <= w - r))
		if((r <= y) && (y <= h - r))
		{
			printf("Yes\n");
			return 0;
		}
	printf("No\n");

	return 0;
}