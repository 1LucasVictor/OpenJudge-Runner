#include <stdlib.h>
#include <stdio.h>

int main(){
	int n, m, l;
	int i, j, k;
	int **A, **B, **C;


	scanf("%d %d %d", &n, &m, &l);


	A = (int **)malloc(sizeof(int)*n);
	for(i=0; i<n; i++){
		A[i] = (int *)malloc(sizeof(int) * m);
	}
	
	B = (int **)malloc(sizeof(int)*m);
	for(i=0; i<m; i++){
		B[i] = (int *)malloc(sizeof(int) * l);
	}

	C = (int **)malloc(sizeof(int)*n);
	for(i=0; i<n; i++){
		C[i] = (int *)malloc(sizeof(int) * l);
	}

	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &A[i][j]);
		}
	}
	for(i=0; i<m; i++){
		for(j=0; j<l; j++){
			scanf("%d", &B[i][j]);
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<l; j++){
			C[i][j] = 0;
			for(k=0; k<m; k++){
				C[i][j] += A[i][k] * B[k][j]; 
			}
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<l; j++){
			if(j>0)
				printf(" ");
			printf("%d", C[i][j]);
		}
		printf("\n");
		
	}	

	for(i=0; i<n; i++){
		free(A[i]);
	}
	for(i=0; i<m; i++){
		free(B[i]);
	}
	for(i=0; i<n; i++){
		free(C[i]);
	}
	free(A);
	free(B);
	free(C);

	return 0;

}
