#include <stdio.h>

int a[111111], t[111111];

int main(void)
{
	int n, i;

	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		scanf("%d", &a[i]);
		t[a[i]]++;
	}

	for (i = 1; i <= n; i++)
		printf("%d\n", t[i]);
	return 0;
}