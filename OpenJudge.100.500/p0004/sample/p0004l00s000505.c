#include <stdio.h>

int main(void)
{
	long long unsigned a,b,x,y,mod,gcd,lcm;

	while(scanf("%llu %llu",&a,&b)!=EOF) {
		x=a>=b?a:b;
		y=b>=a?a:b;
		if(y==0) {
			gcd=x;
		}else {
			while(mod=x%y)  {
				y=mod;
			}
			gcd=y;
		}
		lcm=a*b/gcd;
		printf("%llu %llu\n",gcd,lcm);
	}
	return 0;
}