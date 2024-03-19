#include <stdio.h>

int main()
{
	long long int a,b,c,d,r,gcd,lcm;
	while(scanf("%llu %llu",&a,&b)!=EOF){
	c=a; d=b; r=1;
	while(r)
	{ r=c%d; c=d; d=r; }
	gcd=c; lcm=a*b/gcd;
	printf("%llu %llu\n",gcd,lcm);
	}
	return 0;
}