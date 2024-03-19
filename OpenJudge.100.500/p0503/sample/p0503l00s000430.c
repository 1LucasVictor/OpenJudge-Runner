#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main(void)
{
	int n;
	int *a = NULL;
	int i, j;

	scanf("%d", &n);
	a = (int *)malloc(n * sizeof(int));

	for (i = 0; i < n; i++)
	{
		scanf("%d", a + i);
		for (j = i; j > 0; j--)
		{
			if (a[i] == a[j - 1])
			{
				goto NO;
			}
		}
	}

	if (0)
	{
	NO:
		printf("NO\n");
	}
	else
	{
		printf("YES\n");
	}
	return 0;
}
