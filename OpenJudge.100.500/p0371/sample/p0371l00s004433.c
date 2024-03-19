#include <stdio.h>

int main(void) 
{
	unsigned int n;
	long int an[9999];
	unsigned int i;
	long int min = 1000000;
	long int max = -1000000;
	long long int sum = 0;
	int *p_an;
	p_an = an;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", (p_an + i));
		if(min > *(p_an + i))
		{
			min = *(p_an + i);
		}
		if(max < *(p_an + i))
		{
			max = *(p_an + i);
		}
		sum = sum + *(p_an + i);
	}
	
	printf("%d %d %d\n", min, max, sum);
	return 0;
}