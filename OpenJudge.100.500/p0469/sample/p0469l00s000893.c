#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main() {
	int A, B, K;
	scanf("%d", &K);
	scanf("%d %d", &A, &B);
	for (A; A <= B; A++) {
		if(A%K==0)
		{
			printf("OK\n");
			break;
		}
		if (A == B && B % K == 0) {
			printf("OK\n");
			break;
		}
		if(A==B&&B%K!=0) {
			printf("NG");
			break;
		}
	}
	return 0;
}
