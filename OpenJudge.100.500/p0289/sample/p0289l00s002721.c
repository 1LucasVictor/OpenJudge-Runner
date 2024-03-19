#include<stdio.h>
#include<string.h>
#define anD &&
#define oR ||
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
#define rep(i,n) for((i)=0;(i)<(n);(i)++)

int main(void) {
	unsigned long long a, b;
	scanf("%llu %llu", &a, &b);
	unsigned long long i,gcd=1;
	for (i = 1; i <=min(a,b); i++) {
		if (a%i == 0 anD b%i == 0) {
			if (i > gcd) gcd = i;
		}

	}
	printf("%llu\n", gcd);
	return 0;
}