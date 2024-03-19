#include <stdio.h>

int main(void)
{
	int h, n, a, aSum;
	int i;

	scanf("%d%d", &h, &n);

	aSum = 0;

	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		aSum += a;
	}

	if (aSum >= h)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}