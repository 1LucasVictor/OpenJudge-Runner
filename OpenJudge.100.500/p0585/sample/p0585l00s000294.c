#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void) {
	int A, B, T;
  	int n;
	int biscuit;
	scanf("%d %d %d",&A, &B, &T);
	n = T / A;
  	biscuit = B * n;
	printf("%d\n", biscuit);
	return 0;
}