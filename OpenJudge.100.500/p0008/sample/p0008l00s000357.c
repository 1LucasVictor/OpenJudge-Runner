#include <stdio.h>

int isPrime_odd (int m){
	int i;
	for (i=3; i*i <= m; i++){
		if (m%i == 0) return 0;
	}
	return 1;
}

int main(void) {
	int i, n, ctr;
	while (~scanf ("%d", &n)){
		ctr = 0;
		if (n >= 2) ctr++;
		for (i=3; i<=n; i+=2){
			if (isPrime_odd (i)){
				ctr++;
			}
		}
		printf ("%d\n", ctr);
	}
	return 0;
}