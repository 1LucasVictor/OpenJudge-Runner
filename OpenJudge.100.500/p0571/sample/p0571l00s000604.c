#include <stdio.h>

int main() {
	int A,B,N;
	char a[256];

	fgets(a, 256, stdin);
	sscanf(a, "%d %d %d", &N, &A, &B);
	
	if (A*N < B) {
		printf("%d\n", A*N);
	}
	else if(A*N > B) {
		printf("%d\n", B);
	}
	else{
		printf("%d\n", B);
	}
}