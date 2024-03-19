#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main(void){
 
	int A, B, K;
	int i, j=1;
 
	scanf("%d", &K);
	scanf("%d", &A);
	scanf("%d", &B);
	
 
	for (i = A; i <= B; i++) {
		if (i % K == 0) {
			j *= 0;
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