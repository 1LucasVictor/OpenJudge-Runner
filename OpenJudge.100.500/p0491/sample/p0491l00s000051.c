#include<stdio.h>
int main()
{
	long long n,k;
	scanf("%lld %lld",&n,&k);
	if(n%k==0)
	{
		printf("0\n");
	}
	else if(n%k!=0 && n<k)
	{
		printf("%lld\n",n);
	}
	else
	{
		printf("%lld\n",n/k);
	}
	return 0; 	
}
