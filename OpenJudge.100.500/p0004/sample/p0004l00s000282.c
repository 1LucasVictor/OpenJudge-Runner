#include<stdio.h>
#include<stdlib.h>
long int GCD(long long int x,long long int y){
	long long int big,sml,i;
	if(x>y){
		big=x;sml=y;
	}else{
		big=y;sml=x;
	}
	while(big%sml!=0){
		i=sml;
		sml=(big%i);
		big=i;
	}
	return sml;
}

int main(){
	long long int a,b,gcd,lcm;
	while(scanf("%lld %lld",&a,&b)!=EOF){
		gcd=GCD(a,b);
		lcm=a*b/gcd;
		printf("%lld %lld\n",gcd,lcm);
	}
    return 0;
}