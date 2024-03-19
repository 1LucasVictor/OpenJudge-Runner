#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int);

int main()
{
	int input_count;
	int prime_count;
	int input;
	int for_cnt;
	
	
	input_count = 0;
	
	while(scanf("%d", &input) != EOF)
	{
		prime_count = 0;
		for(for_cnt = 2; for_cnt <= input; for_cnt++)
		{
			if(is_prime(for_cnt))
			{
				prime_count++;
			}
		}
		printf("%d\n", prime_count);
		input_count++;
	}
	
    return 0;
}

int is_prime(int test_num)
{
	int divisor = 2;
	if(test_num < 2)
	{
		return 0;
	}
	
	for( ; divisor < test_num; ++divisor)
	{
		if(test_num % divisor == 0)
		{
			return 0;
		}
	}
	return 1;
}