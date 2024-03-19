#include<stdio.h>
long long Gcd(long long x,long long y);

int main(void){
	long long a,b,g,lcm;
	int i;
	while( scanf("%lld %lld",&a,&b) != EOF ){
		g=Gcd(a,b);
		lcm=a*b/g;
		
		printf("%lld %lld\n",g,lcm);
	}
	
	return 0;
}

long long Gcd(long long x,long long y){
	int i,j;
	long long tmp;
	if(y>=x){
		tmp=x;
		x=y;
		y=tmp;
	}
	
	for(i=0;;i++){
		x=x%y;
		
		tmp=x;
		x=y;
		y=tmp;
		
		if(y==0){
			break;
		}
	}

	return (x);
}