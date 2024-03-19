#include <stdio.h>
#define N 1000000
#define M N/2+1

int main(void){
	int i = 1,k;
	int n;
	int primeTable[N] = {0};

	primeTable[0] = 1;
	primeTable[1] = 1;
	k = 2;

	/* 2の倍数 */
	while(2*k < N){
		primeTable[2*k] = 1;
		k++;
	}
	/* 3以上の倍数 */
	for( i = 3 ; i < M ; i=i+2){
		k = 2;
		while(i*k < N){
			primeTable[i*k] = 1;
			k++;
		}
	}

	while(scanf("%d", &n) != EOF){
		int count = 0;
		for(i = 2 ; i <= n ; i++){
			if(primeTable[i] == 0) count++;
		}
		printf("%d\n", count);
	}

	return 0;
}