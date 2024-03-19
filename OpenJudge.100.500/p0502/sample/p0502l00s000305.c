#include <stdio.h>

int main() {
	int N, A[1000];
	scanf("%d",&N);
	for (int i = 0; i < N;i++) {
		scanf("%d",&A[i]);
		if (A[i]%2==0) {
			if (A[i]%3!=0&&A[i]%5!=0) {
				printf("DENIED");
				return 0;
			}
		}
	}
	printf("APPROVED");
	return 0;
}