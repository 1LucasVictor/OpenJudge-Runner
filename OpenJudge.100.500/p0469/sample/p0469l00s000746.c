#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int K, A, B, i,j = 0;
	scanf("%d", &K);
	scanf("%d %d", &A, &B);
	for (i = A; i < B; i++) {
		if (i % K == 0) {
			j = 0;
			break;
		}
		else {
			j = 1;
			
		}
	}
	if (j == 0) {
		printf("OK");
	}
	else {
		printf("NG");
	}
	return 0;
}



