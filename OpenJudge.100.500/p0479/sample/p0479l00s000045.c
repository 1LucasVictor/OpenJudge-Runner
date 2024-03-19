#include <stdio.h>
#include <stdlib.h>

int main(){
	long N, i, Ai;
	long *B;

	scanf("%ld", &N);
	B = malloc(N * sizeof(long));

	for(i=0; i<N-1; i++){
		scanf("%ld", &Ai);
		B[Ai-1]++;
	}

	for(i=0; i<N; i++){
		printf("%ld\n",B[i]);
	}


	return 0;
}
