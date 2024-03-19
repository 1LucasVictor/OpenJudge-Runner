#include <stdio.h>

int gcd (int a, int b){
	if (a%b == 0) return b;
	return gcd (b, a%b);
}	

int main(void) {
	int a, b, g, tmp;
	while (scanf ("%d %d", &a, &b) != EOF){
		if (a<b){
			tmp = a;
			a = b;
			b = tmp;
		}
		g = gcd (a, b);
		printf ("%d %d\n", g, a/g*b);
	}
	return 0;
}