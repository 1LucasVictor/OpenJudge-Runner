#include<stdio.h>

int main(){
	long unsigned int a, b, gcd, lcm;

	while(scanf("%llu %llu", &a, &b)+1){
		long unsigned int m, n, o;
		m = a;
		n = b;
		while(1){
			if(!(o = m % n)){
				gcd = n;
				break;
			}
			m = n;
			n = o;
		}
		lcm = a * b / gcd;
		printf("%llu %llu\n", gcd, lcm);
	}
	return 0;
}