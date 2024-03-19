#include <stdio.h>
int main(void)
{
	int n, m,i,j;
	int gyo1[100][100];
	int gyo2[1000];
	scanf("%d %d",&n,&m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d ", &gyo1[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d",&gyo2[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		int c = 0;
		for (j = 0; j < m; j++)
		{
			c = c + gyo1[i][j] * gyo2[j];
		}
		printf("%d\n", c);
	}
	return 0;
}