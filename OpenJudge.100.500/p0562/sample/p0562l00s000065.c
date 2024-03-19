#include <stdio.h>

int main(){
	int A, B;
	scanf("%d", &A);
	scanf("%d", &B);

	int C = B % A + 1;
	if(A>=B) C = 1;

	printf("%d\n", C);
}