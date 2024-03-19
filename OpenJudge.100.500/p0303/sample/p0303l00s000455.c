#include <stdio.h>
#include <stdlib.h>
#define N 100000

int NumOfTracks(long long, long long, long long *);

int main()
{
	long long i;
	long long n, k;
	long long m = 0;
	long long weight[N];
	long long maxWeight;
	
	scanf("%lld %lld", &n, &k);
	for(i = 0; i < n; i++)
	{
		scanf("%lld", &weight[i]);
		if(weight[i] > maxWeight) maxWeight = weight[i];
	}
	
	while(1)
	{
		if(k >= NumOfTracks(n, maxWeight, weight))
		{
			printf("%lld\n", maxWeight);
			break;
		}
		maxWeight++;
	}
	return 0;
}

int NumOfTracks(long long n, long long maxWeight, long long *weight)
{
	long long i;
	long long stack = 0;
	long long numTracks = 1;

	for(i = 0; i < n; i++)
	{
		stack += weight[i];
		if(stack > maxWeight)
		{
			stack = weight[i];
			numTracks++;
		}
	}
	return numTracks;
}