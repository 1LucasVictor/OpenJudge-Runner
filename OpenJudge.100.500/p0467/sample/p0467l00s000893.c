#include <stdio.h>

int main()
{
	long int A,B,C,K;

	scanf("%ld %ld %ld %ld",&A,&B,&C,&K);

	if(K-A<=0)
	{
		printf("l%d",K);
		return 0;
	}
	else if(K-A-B<=0)
	{
		printf("%ld",A);
		return 0;
	}
	else
	{
		printf("%ld",A-(K-A-B));
		return 0;
	}
	
}