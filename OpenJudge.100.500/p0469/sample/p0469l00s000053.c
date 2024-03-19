#include <stdio.h>

int main() {
	int K, A, B;
	scanf("%d", &K);
	getchar();
	
	scanf("%d %d", &A, &B);
	for(int i = A; i <= B; i++) {
	 if (i % K == 0) {
	 	printf("OK");
	 	return 0;
	 } else {
	 	continue;
	 }
	}
	printf("NG");
	return 0;
}