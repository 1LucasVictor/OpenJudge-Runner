#include<stdio.h>


int main(void)
{
	int A,B,T;
	int sum = 0;
	int i;
	scanf("%d",&A);
	scanf("%d", &B);
	scanf("%d", &T);
	for (i = 1; A*i < T + 0.5; i++)
		sum += B;
	

	printf("%d",sum);

	}