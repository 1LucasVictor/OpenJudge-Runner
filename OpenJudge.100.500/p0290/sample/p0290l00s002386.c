#include<stdio.h>
int judge(int n)
{
	if (n < 2)
		return 0;
	if (n == 2 || n == 3 || n == 5 || n == 7 || n == 11 || n == 13 || n == 17)
		return 1;
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0 || n % 11 == 0 || n % 13 == 0 || n % 17 == 0)
		return 0;
	int i = 11;
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
	int N, i, n, count = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &n);
		if (judge(n))
			count++;
	}
	printf("%d\n", count);
	return 0;
}