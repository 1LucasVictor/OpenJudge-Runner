#include "stdio.h"

int main(void){
	int A, B, T, result;
	scanf("%d %d %d", &A, &B, &T);
	result = (int)(T / A) * B;
	printf("%d", result);
}