#include<stdio.h>
#define N 101

int main()
{
	int M[N][N];
	int i, j, k, n=0, temp=0, secret=0;
	
	
	scanf("%d",&n);
	
	/*???????????\???*/
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		  M[i][j] = 0;
		}
	}
	
	/*adjacentmatrix??\???*/
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&secret,&k);
		if(k==0)
		{
		}
		else if(k==1)
		{
			scanf("%d",&temp);
			M[i][temp] = 1;
			temp = 0;
		}
		else
		{
			for(j=1;j<=k;j++)
			{
				scanf("%d",&temp);
				M[i][temp] = 1;
				temp = 0;
			}
		}
	}
	
	for(i=1;i<=n;i++)
	{
		printf("%d",M[i][1]);
		for(j=2;j<=n;j++)
		{
		  printf(" %d",M[i][j]);
		}
	 printf("\n");
	}
	return(0);
}