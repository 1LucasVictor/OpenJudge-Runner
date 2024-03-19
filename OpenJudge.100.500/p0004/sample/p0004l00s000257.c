#include <stdio.h>

int main (void){
	long long int a, b, r, x, temp;
	while (scanf("%lld%lld", &a, &b) != EOF){
		x = a*b;
		if (b > a){
			temp = a;
			a = b;
			b = temp;
		}
		r = a%b;
		while (r != 0){
			a = b;
			b = r;
			r = a%b;
		}
		printf("%lld %lld\n", b, x/b);
	}
	return 0;
}