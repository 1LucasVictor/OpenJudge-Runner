#include <stdio.h>

void trace(int *A, int n){
	for(int i = 0; i < n; i++){
		if(i > 0) printf(" ");
		printf("%d", A[i]);
	}

	printf("\n");
}

int main(){
	int i, j, v, n, A[100];

	scanf("%d", &n);

	for(i = 0; i < n; i++)
		scanf("%d", A + i);

	trace(A, n);

	for(i = 1; i < n; i++){
		v = A[i];
		j = i - 1;

		while(j >= 0 && A[j] > v){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = v;

		trace(A, n);
	}

	return 0;
}

