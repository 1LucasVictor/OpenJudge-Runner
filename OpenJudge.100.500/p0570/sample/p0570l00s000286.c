#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int A,B,K;
	scanf("%lld%lld",&A,&B);
	K=(A+B)/2;
	if (abs(A-K) == abs(B-K))
	printf("%lld\n",K);
	else
	{
		printf("IMPOSSIBLE\n");
	}
	return 0;
}

