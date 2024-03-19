#include<time.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h> 
int main()
{
	int n,m,a[110][110],b[110],c,i,j;
	scanf("%d %d",&n,&m);
	for(j=1;j<=n;j++)
		for(i=1;i<=m;i++)
			scanf("%d",&a[j][i]);
	for(i=1;i<=m;i++)
		scanf("%d",&b[i]);
	for(i=1;i<=n;i++)
	{
		c=0;
		for(j=1;j<=m;j++)
			c+=a[i][j]*b[j];
		printf("%d\n",c);
	}
	return 0;
}
