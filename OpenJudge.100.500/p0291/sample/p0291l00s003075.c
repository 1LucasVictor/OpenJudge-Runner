#include <stdio.h>
#include <stdlib.h>

int main () {
	int n;	// size of Array
	int i, j;
	int *R;
	int max;
	
	scanf ("%d", &n);
	R = (int *) malloc(sizeof(int) * n);
	
	for (i=0;i < n;i++) {
		scanf("%d", &R[i]);
	}
	max = R[1] - R[0];
	for (i=0;i < n-1;i++) {
		for (j=i+1;j < n;j++) {
			if (max < (R[j]-R[i])) max = R[j]-R[i];
		}
	}
	
	printf ("%d\n", max);
	
	free(R);
	return 0;
}