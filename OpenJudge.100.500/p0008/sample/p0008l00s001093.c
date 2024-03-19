#include<stdio.h>
#define MAX_N 999999
int prime[MAX_N];
int is_prime[MAX_N+1];

int sieve(int n)
{
	int p=0,i,j;
	for(i=0;i<=n;i++)
		is_prime[i]=1;
	is_prime[0]=is_prime[1]=0;
	for(i=2;i<=n;i++)
	{
		if(is_prime[i])
		{
			prime[p++]=i;
			for(j=2*i;j<=n;j+=i)
				is_prime[j]=0;
		}
	}
	return p;
}

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		printf("%d\n",sieve(n));
	}
	return 0;
}
