#include <stdio.h>

int main() {
	long a, b;
	long GCD, LCM;
	long i, temp;
	while(scanf("%ld %ld", &a, &b) != EOF) {
		if(a > b) temp = a; else temp = b;
		//GCD
		for(i = 1; i < temp; i++) {
			if((a%i) == 0 && (b%i) == 0) {
				GCD = i;
			}
		}
		//LCM
		LCM = (a / GCD) * b;
		printf("%ld %ld\n", GCD, LCM);
	}
	return 0;
}