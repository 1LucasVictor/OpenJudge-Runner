#include <stdlib.h>
#include <stdio.h>

int main(){

	long int A, B, sum;

	scanf("%ld %ld", &A, &B);

	if (A <= 8 && B <= 8)
		printf("Yay!\n");
	else
		printf(":(\n");

	return 0;
}