#include <stdio.h>

int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	if (y % 2 != 0)
		printf("No\n");
	else {
		if (x <= y / 2 && x * 2 >= y / 2)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
