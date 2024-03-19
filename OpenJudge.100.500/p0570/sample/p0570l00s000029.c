#include<stdio.h>
int main(void)
{
	long int A,B,K;
	scanf("%ld%ld",&A,&B);
	if(A%2==0 && B%2==0)
	{
		K=(A+B)/2;
		printf("%ld",K);
	}
	else if(A%2==1 && B%2==1)
	{
		K=(A+B)/2;
		printf("%ld",K);
	}
	else
	printf("IMPOSSIBLE");
	return 0;
}
