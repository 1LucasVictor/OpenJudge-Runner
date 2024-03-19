#include<stdio.h>
int main(void){
	long long a,b,c,d,e;
	long long g;
	long long r;
	while(scanf("%lld%lld",&d,&e)==2){
		if(d!=e){
		
			a=d>e?d:e;
			b=d>e?e:d;
		r=a*b;
		while(a%b!=0){
			c=b;
			b=a%b;
			a=c;
		}
		g=b;
		}
		else {
			r=d*e;
			g=d;
		}

		printf("%lld %lld\n",g,r/g);
	}
	return 0;
}