#include<stdio.h>

int main(void){
	int A[110][110]={},B[110][110]={};
	long int C=0;
	int n,m,l,i,j,k;
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
				C+= A[i][k]*B[k][j];
			}
			printf("%d",C); if(j!=(l-1)) printf(" ");
			C=0;
		}
		printf("\n");
	}
	return 0;
}