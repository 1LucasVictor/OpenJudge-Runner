#include <stdio.h>
#include <stdlib.h>
#define N 100000

int NumOfTracks(int, int, int *);

int main()
{
	int i;
	int n, k;
	int m = 0;
	int weight[N];
	int maxWeight;
	
	scanf("%d %d", &n, &k);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &weight[i]);
		if(weight[i] > maxWeight) maxWeight = weight[i];
		m += maxWeight;
	}
	if(m / n > maxWeight) maxWeight = m / n;
	
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
		stack += weight[i];
		if(stack > maxWeight)
		{
			stack = weight[i];
			numTracks++;
		}
	}
	return numTracks;
}