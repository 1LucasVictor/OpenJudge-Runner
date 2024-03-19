#include <stdio.h>
#define MAX 100000

int n,k,i,j;
long long T[MAX];

int check(long long P)
{
	for(j=0,i=0;j<k;j++)
	{
		long long s=0;
		while(s+T[i]<=P)
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

int solve()
{
	long long l=0;
	long long r=100000*10000;
	long long m;
	while(r-l>1)
	{
		m=(l+r)/2;
		int v=check(m);
		if(v>=n)
		{
			r=m;
		}
		else
		{
			l=m;
		}
	}
	return r;
}

int main(void)
{
	scanf("%d %d",&n,&k);
	for(i;i<n;i++)
	{
		scanf("%d",&T[i]);
	}
	long long ans=solve();
	printf("%d\n",ans);
}
