#include <stdio.h> 

int main(void)
{	
	int n, m, l, i, j, k;
	int a[101][101], b[101][101];
	long c[101][101] = {0};

	scanf("%d %d %d",&n, &m, &l);

	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0; i<n; i++)
	{
		for(j=0; j<l; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			for(k=0; k<l; k++)
			{
				c[i][k] = c[i][k] + a[i][j] * b[j][k];
			}
		}
	}

	for(i=0; i<n; i++)
	{
		for(j=0; j<l; j++)
		{
			printf("%ld", c[i][j]);

			if(l-1 == j)
			{
				printf("\n");
			}
			else
			{
				printf(" ");
			}

		}
	}

	return 0;
}