#include <stdio.h>

int main(void){
	unsigned long int N, K;
	unsigned long int min_bif, min_now;
	int min;

	scanf("%d %d", &N, &K);

	N = N % K;	
	min_bif = N;
	while (1) {
		if ( N > K ) {
			N = N-K;
			min_now = N;
		} else {
			N = K-N;
			min_now = N;
		}
		// printf("bif:%d  now:%d\n", min_bif, min_now);
		if (min_bif <= min_now) { 
			min = min_bif;
			break;
		} else {
			min_bif = min_now;
		}
	}

	printf("%d\n", min);

	return 0;
}
