#include<stdio.h>
#include<stdlib.h>
int asc(const void* a, const void* b)
{
	if (*(int*)a > * (int*)b)return 1;
	if (*(int*)a < *(int*)b)return -1;
	return 0;
}
int main()
{
	int n;
	scanf("%d", &n);
	int i;
	int a[200005];
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	qsort(a, n, sizeof(int), asc);
	for (i = 0; i < n - 1; i++)
	{
		if (a[i] == a[i + 1])
		{
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}