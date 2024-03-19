#include <stdio.h>

int main(void)
{
	long a;
	long b;
	long A;
	long B;
	long r;
	long gcd;
	long lcm;
	
	
	
	while (scanf("%ld %ld", &a, &b) != EOF){
		
		r = 1;
		A = a;
		B = b;
		
		if (a < b){
			r = a;
			a = b;
			b = r;
		}
		
		while (r != 0){
			r = a - b;
			if (b < r){
				a = r;
			}
			else{
				a = b;
				b = r;
			}
		}
		
		gcd = a;
		lcm = A * B / gcd;
		
		printf("%ld ", gcd);
		printf("%ld\n", lcm);
	}
	
	return (0);
}