#include <stdio.h>

int main()
{
	int A, B, C, D;
	int start, end;

	scanf("%d%d%d%d", &A, &B, &C, &D);

	if(A < C){
		start = C;
	}
	else{
		start = A;
	}

	if(B < D){
		end = B;
	}
	else{
		end = D;
	}

	if(end - start < 0){
		printf("0");
	}
	else{
		printf("%d", end - start);
	}

return 0;
}