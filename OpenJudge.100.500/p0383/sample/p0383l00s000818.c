#include<stdio.h>
int main()
{
	int a[100][100]={0};
	int b[100][100]={0};
	int c[100][100]={0};
	int i,j,k;
	int n,m,l;
	scanf("%d%d%d",&n,&m,&l);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);

		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<l;j++)
		{
			scanf("%d",&b[i][j]);

		}
	}
	//Cnl=Σ<k=0,1,2,***,m>Ank*Bkl
	for(i=0;i<n;i++)
	{
		for(j=0;j<l;j++)
		{
			for(k=0;k<m;k++)
			{
				
				c[i][j]+=(a[i][k]*b[k][j]);	
				
			}
		
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<l-1;j++)
		{
			printf("%d ",c[i][j]);

		}
		printf("%d\n",c[i][l-1]);
	}
return 0;
}