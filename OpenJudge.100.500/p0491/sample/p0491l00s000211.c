#include<stdio.h>

int gcd(long long a,long long b)
{
	if (b==0) return a;
	else return gcd(b,a%b); 
}

int main()
{
	long long a,b;
	scanf("%lld%lld",&a,&b);
	if (a==1||b==1) printf("0");
	else printf("%lld",gcd(a,b));
	
	return 0;
}
