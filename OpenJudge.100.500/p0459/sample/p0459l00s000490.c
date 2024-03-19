#include <stdio.h>

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);

	for (int i = 1; i <= x; i++)
	{
		if ((i * 2 + (x - i) * 4) == y)
		{
			printf("Yes\n");
			return 0;
		}
	}

	printf("No\n");
	return 0;
}