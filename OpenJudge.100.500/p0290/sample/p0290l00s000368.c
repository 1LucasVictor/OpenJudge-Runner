#include <stdio.h>

int PRIMES[100000000] = {0};

void make_prime() {
	PRIMES[0] = 2;
	int i, j;
	
	for (i = 3; i < 10000; ++i) {
		for (j = 0; PRIMES[j] != 0; ++j) {
			if ((i % PRIMES[j]) == 0) {
				break;
			}
		}
		if (PRIMES[j]) {
			continue;
		} else {
			PRIMES[j] = i;
		}
	}
	return;
}

int main(void)
{
	int i, j, n, cnt, p;
	make_prime();
	scanf("%d", &n);
	cnt = 0;
	for (i = 0; i < n; ++i) {
		scanf(" %d", &p);
		for (j = 0; PRIMES[j] <= p; ++j) {
			if (PRIMES[j] == p) {
				++cnt;
				break;
			}
		}
	}
	
	printf("%d\n", cnt);
	return 0;
}