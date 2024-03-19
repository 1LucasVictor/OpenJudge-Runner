#include<stdio.h>
int main()
{
	long long n,i,r,r1,t1,t2,t3,j;
	scanf("%lld",&n);
	r=n/500;
	t1=n%500;
	t2=t1/5;
	t3=r*1000+t2*5;
	printf("%lld",t3);
return 0;
}
	