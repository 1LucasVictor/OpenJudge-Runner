#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void) {
	
	int A, B;
	scanf("%d%d", &A, &B);
	int a = A + B;
	int b = A - B;
	int c = A * B;
	if (a >= b&&a >= c) {
		printf("%d", a);
	}
	else if (b >= a && b >= c) {
		printf("%d", b);
	}
	else {
		printf("%d", c);
	}


	return 0;

}