#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
	long n, k;
	scanf("%ld %ld", &n, &k);
	long mod;
	if (n == 0) {
		mod = k;
	}
	else {
		mod = n % k;
	}
	if (mod > k) {
		printf("%ld", mod < mod - k ? mod : mod - k);
	}
	else {
		printf("%ld", mod < k - mod ? mod : k - mod);
	}


	return 0;
}