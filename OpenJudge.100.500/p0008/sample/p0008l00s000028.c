#include <stdio.h>
const int MAX_V = 1000000;
int prime[1000001];
int main() {
	int i, k, n;
	for(i = 2; i <= MAX_V; i++) {
		prime[i] = 1;
	}
	for(i = 2; i*i <= MAX_V; i++) {
		if(prime[i]) {
			for(k = 2 * i; k <= MAX_V; k += i) {
				prime[k] = 0;
			}
		}
	}
	for(i = 3; i <= MAX_V; i++){
		prime[i] = prime[i] + prime[i-1];
	}
	while(scanf("%d", &n) != EOF) {
		printf("%d\n", prime[n]);
	}
	return 0;
}