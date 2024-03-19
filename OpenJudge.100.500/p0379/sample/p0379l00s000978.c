#include <stdio.h>

int main(void)
{
	int a[100][100],b[100],c[100],n,m,i,j,k;
	scanf("%d%d",&n,&m);
	for(i=0;i<=99;i++)
	{
		for(j=0;j<=99;j++)
		{
			a[i][j]=0;
			b[i]=0;
			c[i]=0;
		}
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=m-1;j++)
		{
			scanf("%d",&k);
			a[i][j]=k;
		}
	}
	for(i=0;i<=m-1;i++)
	{
		scanf("%d",&k);
		b[i]=k;
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=m-1;j++)
		{
			c[i]=c[i]+a[i][j]*b[j];
		}
		printf("%d\n",c[i]);
	}
	return 0;
			
}