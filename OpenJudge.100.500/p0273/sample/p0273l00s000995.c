#include<stdio.h>
int main(void)
{
	int n, i, a[45];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		a[i] = 0;
		if (i == 0 || i == 1)
		{
			a[i] = 1;
		}
	}
	for (i = 2; i <= n; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
		if (i == n)
		{
			printf("%d\n", a[i]);
		}
	}
	return 0;
}