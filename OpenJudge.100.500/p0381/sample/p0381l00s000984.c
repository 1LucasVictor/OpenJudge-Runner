#include<stdio.h>

int main()
{
	int a, b, c, n, x, count;
	
	scanf("%d %d", &n, &x);
	while (n || x)
	{
		count = 0;
		for (a = 3; a <= n; a++)
		{
			for (b = 2; b < a; b++)
			{
				for (c = 1; c < b; c++)
				{
					if (a + b + c == x)
						count++;
				}
			}
		}
		printf("%d\n", count);
		scanf("%d %d", &n, &x);
	}
}
