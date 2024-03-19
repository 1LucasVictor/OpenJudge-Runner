#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int N;
	int S[200000] = {0};
	int A;
	
	scanf("%d", &N);
	for(int i = 1; i < N; i++) {
		scanf("%d", &A);
		S[A-1]++;
	}
	
	for(int i = 0; i < N; i++) {
		printf("%d\n", S[i]);
	}

	return 0;
}
