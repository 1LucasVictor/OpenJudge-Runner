#include<stdio.h>
int main(void){
	int n,m,l;
	int A[10000][100],B[100][100],C[100][100]={0};
	int i,j,k;
	scanf("%d %d %d",&n,&m,&l);
	
	//torikomi
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
	
	//keisan
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			for(k=0;k<m;k++){
				C[i][j]+=A[i][k]*B[k][j];
			}
		}
	}

	//hyouji
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			printf("%d",C[i][j]);
			if(j!=(l-1)) printf(" ");
			else printf("\n");
		}
	}
	return 0;
}