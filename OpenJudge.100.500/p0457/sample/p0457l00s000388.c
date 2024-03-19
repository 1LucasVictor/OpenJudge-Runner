#include<stdio.h>
int a[200001];
int b[200001];
int main()
{
	int n,m,k,i,j,sum=0;
	scanf("%d%d%d",&n,&m,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n;i<m;i++)
	{
		a[i]=1000000001;
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=m;i<n;i++)
	{
		b[i]=1000000001;
	}
	i=0;
	j=0;
	while(k>0&&(i<n||j<m))
	{
		if(a[i]<b[j])
		{
			if(k>=a[i])
			{
				k-=a[i];
				sum++;
				i++;
			}
			else break;
		}
		else
		{
			if(k>=b[j])
			{
				k-=b[j];
				sum++;
				j++;
			}
			else break;
		}
	}
	printf("%d",sum);
	return 0;
}