#include<stdio.h>
int main()
{
	long long int x,happy=0;
	scanf("%lld",&x);
	int temp1;
	temp1=x/500;
	happy+=temp1*1000;
	temp1=x%500;
	happy+=(temp1/5)*5;
	printf("%lld",happy);
	return 0;
}