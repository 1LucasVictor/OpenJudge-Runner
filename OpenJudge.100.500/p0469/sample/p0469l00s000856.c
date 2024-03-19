#include<stdio.h>
int main()
{
	int k, a, b,i;
	scanf("%d", &k);
	scanf("%d%d", &a, &b);
	if (b - a + 1 >= k)
	{
		printf("OK\n");
	}
	else
	{
		for (i = a;i <= b;i++)
		{
			if (i % k == 0)
			{
				printf("OK");
				break;
			}
		}
		if (i > b) printf("NG");
	}
	return 0;
}