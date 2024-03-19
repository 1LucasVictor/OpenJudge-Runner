#include<stdio.h>
int main(void) {
	int A, B, K,i;
	scanf("%d", &K);
	scanf("%d,%d", &A,&B);
	if (B / K * K >= A) {
		printf("OK");
	}
	else{
		printf("NG");
	}

	return 0;
}