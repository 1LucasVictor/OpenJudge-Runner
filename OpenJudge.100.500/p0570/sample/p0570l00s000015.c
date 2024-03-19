#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(void){
	int A,B,K;
	scanf("%d %d", &A,&B);
	K =( A + B )/ 2;
	if (abs(A - K) == abs(B - K)) {
		printf("%d", K);
	}
	else {
		puts("IMPOSSIBLE");
	}
	return 0;
}