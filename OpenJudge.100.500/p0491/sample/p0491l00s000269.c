#include <stdio.h>

int main(void) {
	long i,n, k;
	scanf("%ld", &n);
	scanf("%ld", &k);
	long tmp;
	tmp = n % k;
	long tmp2 = -1 * (tmp - k);
	if(tmp > tmp2) {
		printf("%ld", tmp2);
	}
	else {
		printf("%ld", tmp);
	}
	return 0;
}