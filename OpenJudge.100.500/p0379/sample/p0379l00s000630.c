#include <stdio.h>

int main(void){
	int n,m,i,j;
	long B[100],A[100][100],C[100]={0};
	
	scanf("%d %d",&n,&m);
	
	for(i=0;i<=n-1;i++){
		for(j=0;j<=m-1;j++){
			scanf("%ld",&A[i][j]);
		}
	}
	
	for(i=0;i<=m-1;i++){
		scanf("%ld",&B[i]);
	}
	
	for(i=0;i<=n-1;i++){
		for(j=0;j<=m-1;j++){
			C[i]+=A[i][j]*B[j];
		}
	}
	printf("\n");
	for(i=0;i<=n-1;i++){
		printf("%ld\n",C[i]);
	}
	return 0;
}