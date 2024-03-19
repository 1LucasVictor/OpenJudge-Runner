#include<stdio.h>

int main(){
	double a,b;
	scanf("%lf %lf",&a,&b);
	
	double c;
	c = a*b;
	long long d = (int)c;
	printf("%lld\n",d);
	
	return 0;
}