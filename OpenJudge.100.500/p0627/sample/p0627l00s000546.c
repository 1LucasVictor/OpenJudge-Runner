#include <stdio.h>
#include <math.h>
 
int main(void) {

	int A, B;
	scanf("%d %d", &A, &B);
	printf("%.0f", fmax(A + B, fmax(A - B, A * B)));	    

	return 0;
}