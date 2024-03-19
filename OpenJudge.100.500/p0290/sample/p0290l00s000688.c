#include<stdio.h>

int isPrime(x) {
	int d = 1, i, k, l = 0;
    if (x < 2 || x % 2 == 0) {
        d = 0;
    }
    if (x == 2) {
		d = 1;
	}
    else {
		for (k = 1; x > k * k; k++) {
			l = k;
		}
		for (i = 3; i < l; i+= 2) {
			if (x % i == 0) {
				d = 0;
			}
		}
	}
	return d;
}

int main() {
	int N[10000], c = 0, j, n;
	scanf("%d", &n);
	for (j = 0; j < n; j++) {
		scanf("%d", &N[j]);
	}
	for (j = 0; j < n; j++) {
	    c += isPrime(N[j]);
	}
	printf("%d\n",c);
	
	return 0;
}
    
