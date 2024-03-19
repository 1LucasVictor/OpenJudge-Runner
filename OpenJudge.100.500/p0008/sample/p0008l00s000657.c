#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef int 	BOOL;
#define TRUE	1;
#define FALSE	0;

int is_prime(int);

int main()
{
	int input_count;
	int prime_count;
	int input;
	int for_cnt;
	int output_array[30];
	char temp_input[6];
	
	for(for_cnt = 0; for_cnt < 30; for_cnt++)
	{
		output_array[for_cnt] = 0;
	}
	
	input_count = 0;
	
	while(scanf("%d", &input) != EOF)
	{
		
		
		
		

		if(input == 0)
		{
			break;
		}
				
		prime_count = 0;
		for(for_cnt = 2; for_cnt <= input; for_cnt++)
		{
			if(is_prime(for_cnt))
			{
				prime_count++;
			}
		}
		
		output_array[input_count] = prime_count;
		input_count++;
	}
	
	if(input_count < 30)
	{
		output_array[input_count] = -1;		/*For end tag*/
	}
	
	input_count = 0;
	
	while(input_count < 30 && output_array[input_count] != -1)
	{
		printf("%d\n", output_array[input_count]);
		input_count++;
	}

	
    return 0;
}

BOOL is_prime(int test_num)
{
	int divisor = 2;	/*Least prime number*/
	if(test_num < 2)
	{
		return FALSE;
	}
	
	for( ; divisor < test_num; ++divisor)
	{
		if(test_num % divisor == 0)
		{
			return FALSE;
		}
	}
	return TRUE;
}