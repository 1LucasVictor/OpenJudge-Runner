#include <stdio.h>
#include <string.h>

main()
{
	long n,m,k;
	long N[10000],M[10000],W[20000];
	
	scanf("%ld",&n);
	scanf("%ld",&m);
	scanf("%ld",&k);
	
	int i,j;
	int temp=0;
	int count=0;
	int sum=0;
	
	for(i=0;i<n;i++)
	{
		scanf("%ld",&N[i]);
	}

	for(i=0;i<m;i++)
	{
		scanf("%ld",&M[i]);
	}
	
	for(i=0;i<n;i++)
	{
		W[i]=N[i];
	}
	
	for(i=n;i<n+m;i++)
	{
		W[i]=M[i-n];
	}
	
	for(i=0;i<n+m;i++)
	{
		for(j=i+1;j<n+m;j++)
		{
			if(W[j]<W[i])
			{
				temp=W[j];
				W[j]=W[i];
				W[i]=temp;
			}
		}
	}
	
	sum=W[0];
	for(i=1;i<n+m;i++)
	{
		if(sum<k)
		{
			sum+=W[i];
			++count;
		}
	}
	printf("%d",count);

}