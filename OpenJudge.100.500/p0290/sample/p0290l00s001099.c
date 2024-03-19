#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int num);

int main(void)
{
	int N;
	int i, j;
	scanf("%d", &N);
	int* listOfInput = (int*) malloc(N * sizeof(int));
	int* listOfPrime = (int*) malloc(N * sizeof(int));
	for (i = 0; i < N; i++)
		*(listOfPrime + i) = 0;
	for (i = 0; i < N; i++)
		scanf("%d", listOfInput + i);
	j = 0;
	for (i = 0; i < N; i++)
	{
		if(isPrime(*(listOfInput + i)))
		{
			*(listOfPrime + j) = *(listOfInput + i);
			j++;
		}
	}
	printf("%d\n", j);
}

int isPrime(int num)
{
	int d;
	for (d = 2; d <= sqrt(num); d++)
	{
		if (num % d ==  0)
			return 0;
	}
	return 1;
}
