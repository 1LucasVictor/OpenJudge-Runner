#include<stdio.h>

int main(void) 
{
	int N;
	scanf("%d", &N);
	int x;
	x = N / 500 * 1000+(N%500)/5*5;
	printf("%d", x);

	return 0;
}