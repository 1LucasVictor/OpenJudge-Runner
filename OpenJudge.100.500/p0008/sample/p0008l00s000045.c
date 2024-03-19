#include <stdio.h>

int main (void)
{
	int i, j, n , cnt;
	
	while ( scanf("%d", &n) != EOF )
	{
		cnt = n - 1;
		for (i = 2; i <= n; i++)
		{
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					cnt--;
					break;
				}
			}
		}
		
		printf("%d\n", cnt);
	}
	
	return 0;
}