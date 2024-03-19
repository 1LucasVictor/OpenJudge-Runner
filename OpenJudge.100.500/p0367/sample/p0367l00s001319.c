#include <stdio.h>

int main()
{
	int i, j;
	int a[3];
	int count = 0;

	for (i = 0; i < 3; i++)
		scanf("%d", &a[i]);

	for (i = a[0]; i <= a[1]; i++)
	{
		if (a[2] % i == 0)
			count++;
	}

	printf("%d\n", count);
	return 0;
}
