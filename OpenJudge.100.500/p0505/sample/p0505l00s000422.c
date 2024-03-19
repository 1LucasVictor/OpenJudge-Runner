#include<stdio.h>
int main()
{
	int h, n;
	scanf("%d %d", &h, &n);
	int i;
	int a, sum = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		sum += a;
	}
	if (sum < h)
		printf("No\n");
	else
		printf("Yes\n");
	return 0;
}