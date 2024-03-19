#include <stdio.h>
#include <math.h>

int checkprime(int x)
{
	int i, prime_max;
	prime_max = sqrt(x);
	
	for(i = 2; i <= prime_max; i++)
	{
		if(x % i == 0)
		{
			return 0;
		}
	}
	
	//printf(">%d\n", x);
	return 1;
}

int main(void)
{
	int n, temp, num_prime;
	int i;
	while(scanf("%d", &n)==1)
	{
		num_prime = 0;
		for(i = 0; i < n; i++)
		{
			scanf("%d", &temp);
			if(temp >= 2){
				num_prime = num_prime + checkprime(temp);
			}
		}
		
		printf("%d\n", num_prime);
	}
	
	return 0;
}