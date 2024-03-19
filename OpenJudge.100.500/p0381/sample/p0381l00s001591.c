#include <stdio.h>

int main(void)
{
	int i, j, k;
	int n;
	int x;
	int cnt;
	
	while(1)
	{
		n = 0;
		x = 0;
		cnt = 0;
		scanf("%d %d", &n, &x);
		if(n == 0 && x == 0)
		{
			break;
		}
		
		for(i = 1; i <= n - 2; i++)
		{
			for(j = i + 1; j <=n - 1; j++)
			{
				for(k = i + 2; k <= n; k++)
				{
					if(i != j && j != k && i != k && x == (i + j + k))
					{
						cnt ++;
						//printf("%d,%d,%d\n", i , j, k);
					}
				}
			}
		}
		printf("%d\n", cnt);
		
	}

	return 0;
}