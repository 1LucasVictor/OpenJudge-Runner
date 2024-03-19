#include <stdio.h>

int main(void)
{
	int x, n, i, j, k;
	
	while(scanf("%d %d", &n, &x) != EOF)
	{
		int count = 0;
		if(n == 0 && x == 0) break;
		
		for(i = 1;i < n-1; i++)
		{
			for(j = i + 1;j < n; j++)
			{
				for(k = j + 1;k <= n; k++)
				{
					if(i + j + k == x) count++;
				}
			}
		}
		
		printf("%d\n", count);
	}
	
	return 0;
}