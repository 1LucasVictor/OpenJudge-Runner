#include <stdlib.h>
#include <stdio.h>

int main(){
	int n, m, l;
	int i, j, k;
	long long *A, *B, *C;


	scanf("%d %d %d", &n, &m, &l);


	A = malloc(sizeof(long long)*n*m);
	
	B = malloc(sizeof(long long)*m*l);

	C = malloc(sizeof(long long)*n*l);


	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &A[i*m+j]);
		}
	}
	for(i=0; i<m; i++){
		for(j=0; j<l; j++){
			scanf("%d", &B[i*l+j]);
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<l; j++){
			C[i*l+j] = 0;
			for(k=0; k<m; k++){
				C[i*l+j] = C[i*l+j] +  A[i*m+k] * B[k*l+j]; 
			}
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<l; j++){
			if(j>0)
				printf(" ");
			printf("%d", C[i*l+j]);
		}
		printf("\n");
		
	}	


	free(A);
	free(B);
	free(C);

	return 0;

}
