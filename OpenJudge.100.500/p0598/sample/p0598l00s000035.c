#include<stdio.h>

int main(void){
	int A, B, n;

	scanf("%d", &A);scanf("%d", &B);

	if(B%A == 0){
		n = A + B;
	} else {
		n = B - A;
	}

	printf("%d\n", n);

	return 0;
}