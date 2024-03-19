#include <stdio.h>
int main()
{
	int num[4] = { 0,-1,-1,-1 };
	int N, M;
	scanf("%d %d", &N, &M);
	int s[5], c[5];
	for (int i = 1;i <= M;i++)
	{
		scanf("%d %d", &s[i], &c[i]);
		if (num[s[i]] == -1 || num[s[i]] == c[i])
			num[s[i]] = c[i];
		else
		{
			printf("-1");
			return 0;
		}
	}
	if (num[1] == 0)
	{	
		if (N > 1)
			printf("-1");
			return 0;
	}
	if (num[1] == -1)
	{
		if (N > 1)
			num[1] = 1;
	}
	for (int i = 1;i <= N;i++)
	{
		if (num[i] == -1)
			num[i] = 0;
		printf("%d", num[i]);
	}
	return 0;
}