#include<stdio.h>
int main(void)
{
	int n, i, a[45] = { 0 };
	a[0] = 1;
	a[1] = 1;
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		a[i] = a[i - 2] + a[i - 1];
		if (i == n)
		{
			printf("%d\n", a[i]);
		}
	}
	return 0;
}