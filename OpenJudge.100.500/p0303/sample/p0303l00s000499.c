#include <stdio.h>
#include <stdlib.h>
#define N 100000

int NumOfTracks(int, int, int *);

int main()
{
	int i;
	int n, k;
	int weight[N];
	int maxWeight = 0;
	
	scanf("%d %d", &n, &k);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &weight[i]);
		maxWeight += weight[i];
	}
	maxWeight = maxWeight / n;
	
	while(1)
	{
		if(k >= NumOfTracks(n, maxWeight, weight))
		{
			printf("%d\n", maxWeight);
			break;
		}
		maxWeight++;
	}
	return 0;
}

int NumOfTracks(int n, int maxWeight, int *weight)
{
	int i;
	int stack = 0;
	int numTracks = 1;

	for(i = 0; i < n; i++)
	{
		if(stack + weight[i] > maxWeight)
		{
			stack = 0;
			numTracks++;
			if(weight[i] > maxWeight) numTracks++;
		}
		stack += weight[i];
	}
	return numTracks;
}