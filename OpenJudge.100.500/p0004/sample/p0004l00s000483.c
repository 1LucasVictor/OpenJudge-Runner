#include<stdio.h>
 
int main()
{
	long long a,b,m,n,x,gcd,lcm;
	
	while(scanf("%lld %lld",&a,&b)==2)
	{
		m=a;
		n=b;
		while(1){
			if(!(x=m%n)){
				gcd=n;
				break;
			}
			m=n;
			n=x;
		}
		lcm=a*b/gcd;
		printf("%lld %lld\n",gcd,lcm);
	}
	return 0; 
}