#include<stdio.h>
int main(){
	int A, B, N;
	scanf("%d %d %d", &N, &A, &B);

	if (N * A >= B){
		printf("%d\n", B);
	}
	else {
		printf("%d\n", N * A);
	}
}