#include<stdio.h>
int main() {
	long long int a,c;
	double b;
	scanf("%lld%lf",&a,&b);
	long long int bb=(double)b*100;
	c=a*bb/100;
	printf("%lld\n",c);
	return 0;
}
	