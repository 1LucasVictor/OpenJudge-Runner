#include <stdio.h>

int main(void)
{
	int n, a[1000], i;

	scanf("%d",&n);
	for (i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = n - 1;i >= 0;i--)
	{
		printf("%d", a[i]);
		if (i != 0)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}

	return 0;
}
