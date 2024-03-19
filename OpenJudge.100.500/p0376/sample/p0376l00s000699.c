#include <stdio.h>

int main(void)
{
	int a[100], n, i;
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (i = i - 1; i >= 0; i--)
	{
		printf("%d", a[i]);
		if (i != 0)
			putchar(' ');
		else
			putchar('\n');
	}
	return 0;
}