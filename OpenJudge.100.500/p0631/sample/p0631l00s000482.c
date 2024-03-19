#include <stdlib.h>
#include <stdio.h>

int main(){

	int A, B, X;

	scanf("%d %d %d", &A, &B, &X);

	if ((A + B >= X && A < X))
		printf("YES\n");
	else
		printf("NO\n");


	return 0;
}