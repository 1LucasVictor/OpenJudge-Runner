#include <stdio.h>

int main(void){
	unsigned long int N, K;
	unsigned long int min_bif, min_now;
	unsigned long int min;
	unsigned long int tmp;

	scanf("%d %d", &N, &K);

	N = N % K;	
	min_bif = N;
	while (1) {
		if ( N > K ) {
			min_now = N-K;
		} else {
			min_now = K-N;
		}
		// printf("bif:%d  now:%d\n", min_bif, min_now);
		if (min_bif <= min_now) { 
			min = min_bif;
			break;
		} else {
			tmp = min_bif;
			min_bif = min_now;
			min_now = tmp;
		}
	}

	printf("%d\n", min);

	return 0;
}
