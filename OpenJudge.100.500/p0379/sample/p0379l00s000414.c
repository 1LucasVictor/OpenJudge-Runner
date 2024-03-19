#include<stdio.h>

int main(void){
	int i,j,n,m,num;
	scanf("%d%d",&n,&m);
	int A[n][m],B[m],C[n];
	num = m;
	//input A	
	for(i=0;i<n;i++){
		C[i] = 0;
		for(j=0;j<m;j++){
			scanf("%d",&A[i][j]);
		}
	}
	// input B
	for(i=0;i<m;i++){
		scanf("%d",&B[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			C[i] += A[i][j]*B[j];
		}
		printf("%d\n",C[i]);
	}

	return 0;
}