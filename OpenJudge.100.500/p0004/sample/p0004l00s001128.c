#include <stdio.h>

int main(){
	long long int a,b,tmp,gcd,lcm,ab;
	while(scanf("%lld%lld",&a,&b) != EOF){
		gcd = 0;
		lcm = 0;
		ab = a*b;
		if(a>=b){
			while(1){
			tmp = a % b;
			if(tmp == 0){
				gcd = b;
				break ;
			}
			a = b;
			b = tmp;
			}
		}
		else if (a<=b){
			while(1){
			tmp = b % a;
			if(tmp == 0){
				gcd = a;
				break ;
			}
			b = a;
			a = tmp;
			}
		}
		lcm = ab/gcd;
		printf("%lld %lld\n",gcd,lcm);
	}
	return 0;
}