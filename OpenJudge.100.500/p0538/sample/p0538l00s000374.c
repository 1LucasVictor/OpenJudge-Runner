#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void) {
	
	int A, B;
	scanf("%d%d", &A, &B);
	if (A <= 9 && B <= 9) {
		printf("%d", A*B);
	}
	else {
		printf("%d", -1);
	}



	return 0;

}