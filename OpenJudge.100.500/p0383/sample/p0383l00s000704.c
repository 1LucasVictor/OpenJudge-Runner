#include <stdio.h>

int main(void){
	int i,j,k,n,m,l;
	int A[100][100];
	int B[100][100];
	int C[100][100]={0};
	scanf("%d %d %d",&n,&m,&l);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(j=0;j<m;j++){
		for(k=0;k<l;k++){
		scanf("%d",&B[j][k]);
		}
	}

	for(i=0;i<n;i++){
		for(k=0;k<l;k++){
			for(j=0;j<m;j++){
				C[i][k]+=A[i][j]*B[j][k];
			}
			if(C[i][k]>10000){
				break;
			}else{
			if(k==(l-1)){
				printf("%d\n",C[i][k]);
			}else{
				printf("%d ",C[i][k]);
			}
			}
		}
	}

	return 0;
}