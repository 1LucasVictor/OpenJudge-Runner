#include <stdio.h>
int main()
{
	int num[4] = { 0,-1,-1,-1 };
	int N, M, s, c;
	scanf("%d %d", &N, &M);
	for (int i = 1;i <= M;i++)
	{
		scanf("%d %d", &s, &c);
		if (num[s] == -1 || num[s] == c)
			num[s] = c;
		else
		{
			printf("-1");
			return 0;
		}
	}
	if (num[1] == 0)
	{	
		if (N > 1)
		{
			printf("-1");
			return 0;
		}
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