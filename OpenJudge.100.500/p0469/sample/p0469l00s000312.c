#include<stdio.h>
int main(void) {
	int K, A, B;
	scanf("%d\n", &K);
	scanf("%d %d", &A, &B);
	if (B - A >= K) {
		printf("OK");
		return 0;
	}
	if ((A-1) / K == B / K - 1) {
		printf("OK");
	}
	else printf("NG");

	return 0;
}
