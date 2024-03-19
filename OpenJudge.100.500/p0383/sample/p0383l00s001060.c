#include <stdio.h>

int main(void){
	int A[100][100] ={0};
	int B[100][100] ={0};
	long long C[100][100] ={0};
	int i,j,k;
	int n,m,l;
	scanf("%d %d %d",&n,&m,&l);

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&A[i][j]);
		}
	}

		for(i=0;i<m;i++){
		for(j=0;j<l;j++){
			scanf("%d",&B[i][j]);
		}
	}

	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			for(k=0;k<m;k++){
				C[i][j] += (A[i][k] * B[k][j]);
			}
			if(j) printf(" ");
			printf("%lld",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}