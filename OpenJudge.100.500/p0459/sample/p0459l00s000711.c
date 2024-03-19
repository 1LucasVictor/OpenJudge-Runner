#include<stdio.h>
int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	int i;
	for (i = 0; i <= x; i++)
	{
		if (2 * i + 4 * (x - i) == y)
		{
			printf("Yes\n");
			return 0;
		}
	}
	printf("No\n");
	return 0;
}