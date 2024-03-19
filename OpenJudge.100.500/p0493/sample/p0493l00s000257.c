#include <stdio.h>

int main() {
long long int x,a,b,c,d;
scanf("%lld",&x);
a=(x/500);
b=a*1000;
c=x%500;
d=(c/5)*5;
printf("%lld",d+b);
	return 0;
}