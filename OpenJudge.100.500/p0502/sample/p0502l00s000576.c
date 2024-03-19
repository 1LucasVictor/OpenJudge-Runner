#include <stdio.h>

int main() {
	int answer = 0;
	int N = 0;
	scanf("%d", &N);

	int A[N];
	int A_even[N];
	for(int i = 0; i < N; i++) {
		A_even[i] = 0;
	}
	int j = 0;
	for(int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
		if((A[i] % 2) == 0) {
			if(((A[i] % 3) == 0) || ((A[i] % 5) == 0)) {
			} else {
				printf("DENIED\n");
				return 0;
			}
		}
	}
	printf("APPROVED\n");
	return 0;
}