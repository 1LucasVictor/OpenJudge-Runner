#include <stdio.h>
int PRIMES[999999] = {0};

void make_prime() {
	int i, j;
	PRIMES[0] = 2;
	for (i = 3; i < 1000; i += 2) {
		for (j = 0; PRIMES[j] != 0; ++j) {
			if ((i % PRIMES[j]) == 0) break;
		}
		if (PRIMES[j] == 0) {
			PRIMES[j] = i;
		}
	}
	
	return;
}

int main(void) {
	int n;
	int i;
	make_prime();
	while (scanf("%d", &n) != EOF) {
		for (i = 0; PRIMES[i] <= n; ++i);
		printf("%d\n",i);
	}
	return 0;
}