#include <stdio.h>
typedef unsigned long long data;
data gcd(data a,data b);
void lcm(data a,data b,data *c,data *d);
int main(){
	data a,b,c,d;
	while(scanf("%llu %llu",&a,&b)!=EOF){
		lcm(a,b,&c,&d);
		printf("%llu %llu\n",c,d);
	}
	return 0;
}
void lcm(data a,data b,data *c,data *d){
	*c=gcd(a,b);
	*d=a*b/gcd(a,b);
}
data gcd(data a,data b){
	data r;
	r=a%b;
	while(r!=0){
		a=b;
		b=r;
		r=a%b;
	}
	return b;
}