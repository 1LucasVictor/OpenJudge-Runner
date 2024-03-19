#include<stdio.h>
#include<stdlib.h>
int main(void){
	int n,m,i,j,num,tmp;
	int *B,**A;
	scanf("%d %d",&n,&m);
	B = (int *)malloc(sizeof(int)*m);
	A = (int **)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		A[i] = (int *)malloc(sizeof(int)*m);
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<m;i++){
		scanf("%d",&B[i]);
	}
	for(i=0;i<n;i++){
		tmp = 0;
		for(j = 0;j<m;j++){
			tmp = tmp + A[i][j] * B[j];
		}
		printf("%d\n",tmp);
	}
	for(i=0;i<n;i++){
		free(A[i]);
	}
	free(A);
	return 0;
}