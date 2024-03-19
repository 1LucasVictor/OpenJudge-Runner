#include <stdio.h>

long GCD(long a, long b);
long LCM(long a, long b, long gcd);

int main(void){
	long a, b, gcd, lcm;
	while(scanf("%ld %ld", &a, &b) != EOF){
		gcd = GCD(a, b);
		lcm = LCM(a, b, gcd);

		printf("%ld %ld\n", gcd, lcm);
	}
	return 0;
}

long GCD(long a, long b){
	long comp, R;

	if(a < b){
		comp = a;
		a = b;
		b = comp;
	}

	while(b != 0){
		comp = a % b;
		a = b;
		b = comp;
	}

	return a;
}

long LCM(long a, long b, long gcd){
	long lcm;
	lcm = a * b / gcd;
	return lcm;
}