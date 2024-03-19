#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main() {
	int A, B, C;
	int K;
	int sum = 0;
	scanf("%d %d %d %d", &A, &B, &C, &K);
	if (K > A) {
		sum = A;
		K = K - A;
	}
	
	else if (K == A) {
		sum = A;
		K = 0;
	}
	else if (K < A) {
		sum = K;
		K = 0;
	}
	//printf("%d", sum);
	if (K > B) {
		K = K - B;
	}
	else if (K == 0) {
		K = 0;
	}
	else if (K <= B) {
		K = 0;
	}
	//printf("%d", sum);
	if (K > 0) {
		sum = sum - K;
	}
	printf("%d", sum);
	return 0;
}
