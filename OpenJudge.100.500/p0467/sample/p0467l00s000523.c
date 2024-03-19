#include <stdio.h>

int main(void) {
	int A = 0;
	int B = 0;
	int C = 0;
	int K = 0;
	long int num = 0;

	scanf("%d %d %d %d", &A, &B, &C, &K);

	int j;
	int count = 0;

	
	for(j=1; j<=A; j++) {
		count++;
		if(count > K) {
			break;
		}
		num = num + 1;
	}

	for(j=1; j<=B; j++) {
		count++;
		if(count > K) {
			break;
		}
	}

	for(j=1; j<=C; j++) {
		count++;
		if(count > K) {
			break;
		}
		num = num - 1;
	}
	
	printf("%ld", num);

	return 0;
}