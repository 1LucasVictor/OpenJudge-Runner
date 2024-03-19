#include<stdio.h>
int main()
{
	int n, a[200001], i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		for (j = 0; j < i; j++)
		{
			if (a[i] == a[j])
			{
				printf("NO");
				return 0;
			}
		}
	}
	printf("YES");
	return 0;
}