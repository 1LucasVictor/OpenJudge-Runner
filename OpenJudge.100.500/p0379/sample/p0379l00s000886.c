#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, m, i, I, a[100][100], b[100], c[100] = {0};
	scanf("%d%d", &n, &m);
	for(i = 0 ; i < n ; i++)
	{
		I = 0;
		while(scanf("%d", &a[i][I]))
		{
			char x = getchar();
			if(x == '\n')
			{
				break;
			}
			I++;
		}
	}
	
	for(i = 0 ; i < m ; i++)
	{
		scanf("%d", &b[i]);
	}
	
	for(i = 0 ; i < n ; i++)
	{
		for(I = 0 ; I < m ; I++)
		{
			c[i] += (a[i][I]*b[I]);
		}
	}
	for(i = 0 ; i < n ; i++)
	{
		printf("%d\n", c[i]);
	}
	return 0;
}

