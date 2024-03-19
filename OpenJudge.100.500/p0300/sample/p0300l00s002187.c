#include <stdio.h>

#include <math.h>

int main(){
	int i;
	int n;
	int q;
	int A[10000], B[10000];
	int j;
	int sum = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++){
		scanf("%d", &A[i]);
	}

	scanf("%d", &q);

	for (i = 0; i < q; i++){
		scanf("%d", &B[i]);
	}
	
	for (i = 0; i < q; i++){
		for (j = 0; j < n; j++){
			if (B[i] == A[j]) sum++;
		}
	}

	printf("%d\n", sum);
	return 0;


}