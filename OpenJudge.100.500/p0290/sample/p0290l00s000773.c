#include<stdio.h>
int judge(int n)
{
	if (n < 2)
		return 0;
	if (n == 2)
		return 1;
	if (n % 2 == 0)
		return 0;
	int i = 3;
	while (i<n)
	{
		if (n%i == 0)
			return 0;
		i++;
	}
	return 1;
}

int main()
{
	int N;
	scanf("%d", &N);
	int count = 0;
	int i,n;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &n);
		if (judge(n))
			count++;
	}
	printf("%d\n", count);
	return 0;
}