#include<stdio.h>

int main()
{
	int n, x,i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if (x % 2 == 0)
			if (x % 3 != 0 && x % 5 != 0)
			{
				printf("DENIED");
				exit(0);
			}
	}
	if (i == n)
		printf("APPROVED");
}