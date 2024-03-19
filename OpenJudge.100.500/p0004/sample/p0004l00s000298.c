#include <stdio.h>
int gcd(int a,int b){
	if(a%b==0)
		return b;
	else
		return(gcd(b,a%b));
}
int main(void)
{
	long long int a,b;
	while(scanf("%lld %lld",&a,&b)>0){
        int lcm=(a*b)/gcd(a,b);
        if(lcm==0) break;
        printf("%lld %lld\n",gcd(a,b),lcm);
	}
	return 0;
}
