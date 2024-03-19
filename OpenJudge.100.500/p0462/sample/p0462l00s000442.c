#include <stdio.h>
int main(void){
	long long a;
	int b, c;
 
	scanf("%lld %d.%d", &a, &b, &c);
	printf("%lld\n", a * (int)( b * 100 + c ) / 100);

    return 0;
}