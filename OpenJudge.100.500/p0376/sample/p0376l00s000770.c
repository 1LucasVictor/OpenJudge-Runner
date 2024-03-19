#include <stdio.h>

int main()
{
	int a[100], ip, n, i;
	scanf("%d", &ip);

	for (i = 0; i < ip; i++)
	{
		scanf("%d", &n);
		a[i] = n;
	}
	for (int j = 0; j < ip; j++)
	{
		if (j == ip - 1)
		{
			printf("%d", a[ip - j - 1]);
		}
		else
		{
			printf("%d ", a[ip - j - 1]);
		}
	}
	printf("\n");
}
