#include<stdio.h>
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int i;
	int s[8], c[8];
	for (i = 0; i < m; i++)
		scanf("%d %d", &s[i], &c[i]);
	int ans[8];
	for (i = 0; i < n; i++)
		ans[i] = -1;
	for (i = 0; i < m; i++)
	{
		if (ans[s[i] - 1] >= 0 && ans[s[i] - 1] != c[i])
		{
			printf("-1\n");
			return 0;
		}
		ans[s[i] - 1] = c[i];
	}
	if (ans[0] == 0)
	{
		if (n > 1)
		{
			printf("-1\n");
			return 0;
		}
	}
	if (ans[0] < 0)
	{
		if (n > 1)
			ans[0] = 1;
		else
			ans[0] = 0;
	}
	for (i = 0; i < n; i++)
	{
		if (ans[i] > 0)
			printf("%d", ans[i]);
		else
			printf("0");
	}
	printf("\n");
	return 0;
}