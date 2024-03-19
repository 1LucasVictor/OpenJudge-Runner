#include <stdio.h>

int main (void){
	int A, B, C, z;

	scanf("%d %d %d", &A, &B, &C);

	z = B + C - A;
	if(z < 0) z = 0;

	printf("%d\n", z);
	return 0;
}