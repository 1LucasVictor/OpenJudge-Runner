#include <stdio.h>
#include <stdlib.h>

int main(void) {
	long i,n, k;
	scanf("%ld", &n);
	scanf("%ld", &k);
	long tmp;
	while (n > 0) {
		tmp = n;
		n = n - k;
		if(n <= 0 && tmp < -1*n) {
			printf("%ld", tmp);
		}
		else if(n <= 0 && tmp >= -1*n) {
			printf("%ld", -n);
		}
	}
	return 0;
}