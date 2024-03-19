#include<stdio.h>
int main()
{
	int a[20000][5];
	int n,i,j,k,t,d,b,c;

	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d%d%d",&a[i][1],&a[i][2],&a[i][3]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2;j++)
		{
			for(k=j+1;k<=3;k++)
			{
				if(a[i][j]<a[i][k])
				{
					t=a[i][j];
					a[i][j]=a[i][k];
					a[i][k]=t;
				}
			}
		}
		b=a[i][2]*a[i][2];
		c=a[i][3]*a[i][3];
		d=a[i][1]*a[i][1];
		
		
		if(b+c==d)
			printf("YES\n");
		else
			printf("NO\n");
	}
	
	return 0;
} 