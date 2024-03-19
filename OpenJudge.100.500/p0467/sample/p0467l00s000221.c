#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int A,B,C,K;
	int i, r = 0;
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	scanf("%d", &K);
	
	for (i = 1; i <= K; i++) {
		if (i <= A) r++;
		else if (i <= (A+B)) r += 0;
		else r--;
	}
	printf ("%d\n", r);
	return(0);
}
