#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
	long n, k;
	scanf("%ld %ld", &n, &k);
	long mod = n % k;
	if (n != 0) {
		printf("%ld", mod < abs(mod - k) ? mod : abs(mod - k));
	}
	else {
		printf("%ld", k);
	}


	return 0;
}
