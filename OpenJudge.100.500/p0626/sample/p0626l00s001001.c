#include<stdio.h>
int main(void)
{
	long long int x,d,n;
	scanf("%lld %lld",&d,&n);
	if(d==0) x=n;
	else if(d==1) x=n*100;
	else x=n*10000;
	printf("%lld\n",x);
	return 0;
}

