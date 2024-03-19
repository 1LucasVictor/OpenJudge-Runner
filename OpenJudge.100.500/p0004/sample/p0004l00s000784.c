#include <stdio.h>

int GCD(int a, int b){
	int n;
	
	while(a % b != 0){
		
		n = b;
		b = a % b;
		a = n;
	}
	
	return (b);
}
	
int main (void){
	int a, b;
	int gcd, lcm;
	
	while (scanf("%d %d", &a, &b) != EOF){
		
		gcd = GCD(a, b);
		lcm = a * (b / gcd);
		
		printf("%d %d\n", gcd, lcm);
	}
	return (0);
}