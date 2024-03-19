#include <stdio.h>

int main(void)
{
	int n;
	int i;
	long int ai[9999];
	long int min = 1000000;
	long int max = -1000000;
	long long int sum = 0;
	int *p_ai;
	
	p_ai = ai;
	
	for(i = 0; i < 10000; i++)
	{
		ai[i] = 0;
	}
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", (p_ai + i));
		if(min > *(p_ai + i))
		{
			min = *(p_ai + i);
		}
		if(max < *(p_ai + i))
		{
			max = *(p_ai + i);
		}
		sum += *(p_ai + i);
	}

	printf("%d %d %d\n", min, max, sum);
	
	return 0;
}