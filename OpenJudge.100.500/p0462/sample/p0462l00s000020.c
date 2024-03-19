#include <stdio.h>

int main(){
	long long a;

	
	long long b, c;

	scanf("%lld %lld.%lld", &a, &b, &c);

	long long d = b * 100 + c;

	printf("%lld\n",( a * d )/ 100);
return 0;
}
