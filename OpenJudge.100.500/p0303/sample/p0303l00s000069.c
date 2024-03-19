#include<stdio.h>

int n,k;
int T[100000];

int check(int p,int T[])
{
	int i=0,j;
	for(j=0;j<k;j++)
	{
		int s=0;
		while(s+T[i]<=p)
		{
			s+=T[i];
			i++;
			if(i==n)
			{
				return n;
			}
		}
	}
	return i;
}

int solve(int T[])
{
	int left=0,right=100000*10000,mid;
	
	while(right-left>1)
	{
		mid=(left+right)/2;
		int v=check(mid,T);
		if(v>=n)
		{
			right=mid;
		}
		else
		{
			left=mid;
		}
	}
	
	return right;
}

int main(void)
{
	int i;
	
	scanf("%d %d",&n,&k);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&T[i]);
	}
	
	int x=solve(T);
	
	printf("%d\n",x);
	
	return 0;
}
