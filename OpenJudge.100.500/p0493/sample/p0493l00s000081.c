#include<stdio.h>

int main(void)
{
	long x,sum,fh=0,f=0,a=0;

	scanf("%ld",&x);

	fh=x/500; a=x%500; f=a/5;

	sum=(fh*1000)+(f*5);

	printf("%ld\n",sum);

	return 0;
}
