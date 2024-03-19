#include<stdio.h>
int main(void)
{
	long int x, a, b;

	scanf("%ld %ld %ld", &x, &a, &b);
	if (b<=a)
	{
		printf("delicious\n");
	}
	 else if (x + a >= b)
		{
			printf("safe\n");
		}
	else if (x + 1 + a <= b)
	{
		printf("dangerous\n");
	}

	
	return 0;
}