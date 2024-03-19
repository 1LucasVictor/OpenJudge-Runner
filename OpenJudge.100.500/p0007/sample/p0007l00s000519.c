#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	int i,j,k;
	int val[4][37];
	for (i = 0; i < 10; i += 1)
	{
		val[0][i] = 1;
		val[1][i] = 0;
		val[2][i] = 0;
		val[3][i] = 0;
	}
	for (; i < 37; i += 1)
	{
		val[0][i] = 0;
		val[1][i] = 0;
		val[2][i] = 0;
		val[3][i] = 0;
	}
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 37;j++)
		{
			for(k = j;k <= ((j>27)?37:j+9);k++)
			{
				val[i+1][k] += val[i][j];
			}
		}
	}
	while(scanf("%d",&n) != EOF)
	{
		if(n > 36)
			printf("0\n");
		else
			printf("%d\n",val[3][n]);
	}
	return 0;
}