#include<stdio.h>

int main(void) {
	long int N, K, p, q;
	scanf("%d %d", &N, &K);
	p = N % K;
	q = K - p;
	if (p > q)
		printf("%d", q);
	else
		printf("%d", p);
	return 0;
}