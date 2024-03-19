#include<stdio.h>

main()
{
	int n,m,l;
	scanf("%d %d %d",&n,&m,&l);
	
	int A[n][m];
	int B[m][l];
	int C[n][l];
	
	int i,j;
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf(" %d",&A[i][j]);
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<l;j++){
			scanf(" %d",&B[i][j]);
		}
	}
	
	int k;
	
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			C[i][j]=0;
			for(k=0;k<m;k++){
				C[i][j] += A[i][k]*B[k][j];
			}
			if(j>0){
				printf(" ");
			}
			printf("%d",C[i][j]);
			if(j == l-1){
				printf("\n");
			}
		}
	}
	return 0;
}