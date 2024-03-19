#include<stdio.h>

int N,U,K,V,G[105][105]={0},i,j;
int main()
{
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d%d",&U,&K);
		for(j=0;j<K;j++)
		{
			scanf("%d",&V);
			G[U][V]=1;
		}
	}
	for(i=1;i<=N;i++)
		for(j=1;j<=N;j++)
			printf("%d%c",G[i][j],j==N?'\n':' ');
	return 0;
}

