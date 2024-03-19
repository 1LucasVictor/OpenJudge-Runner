#include <stdio.h>

int main()
{
	long b,N,K;

	scanf("%ld%ld",&N,&K);

	if(K == 1)
	{
		printf("0\n");
		return 0;
	}
	while(N < K)
	{
		N = N / K;
	}
	while(1)
	{
		b = N;
		N = N - K;
		if(N < 0)
		{
			N = N * -1;
		}
		if(b < N)
		{
			N = b;
			break;
		}

	}

	printf("%ld\n",N);
	return 0;
}