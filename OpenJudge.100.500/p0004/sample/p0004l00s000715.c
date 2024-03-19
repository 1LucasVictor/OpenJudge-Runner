#include <stdio.h>
int rem (int a, int b);
int main () {
	int a, b;
	int LCM;	// Least Common Multiple
	int GCD;	// Greatest Common Divisor
	while (scanf ("%d %d", &a, &b) != EOF) {
		if (a >= b) {
			LCM = rem (a, b);
			GCD = (a / LCM) * b;
		}
		else if (a < b) {
			LCM = rem (b, a);
			GCD = (a / LCM) * b;
		}
		printf ("%d %d\n", LCM, GCD);
	}
	return 0;
}

int rem (int a, int b) {
	if (a % b == 1) {
		return 1;
	} else if (a % b == 0) {
		return b;
	} else {
		return rem (b, (a % b));
	}
	
}