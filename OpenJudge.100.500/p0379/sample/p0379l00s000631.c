#include <stdio.h>

int main(){
	int n,m;

	scanf("%d %d", &n, &m);
	int A[n][m];
	int B[m];
	int C[n];
	int i,j;

	for(i=0; i<n; i++)
		C[i] = 0;

	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0; i<m; i++)
		scanf("%d", &B[i]);

	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			C[i] += A[i][j]*B[j];
		}
	}
	for(i=0; i<n; i++)
		printf("%d\n",C[i]);

	return 0;
}