#include <stdio.h>

int main()
{
	long long int card[3];
	long long int k;
	long long int sum = 0;
	int i = 1,j = 0;
	
	scanf("%lld %lld %lld %lld",&card[0],&card[1],&card[2],&k);
	
	while(k > 0 && j < 3)
	{
		if(k - card[j] < 0)
		{
			sum += k * i;
			k -= card[j];
		}
		else 
		{
			k -= card[j];
			sum += card[j] * i;
		}
		
		j++;
		i--;
	}
	
	printf("%lld\n",sum);
	
	return 0;
}