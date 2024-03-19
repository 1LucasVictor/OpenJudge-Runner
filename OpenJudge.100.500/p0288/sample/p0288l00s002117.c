#include <stdio.h>
int main(void){
	int N,i,j;
	scanf("%d",&N);
	int A[N];
	for(i=0;i<N;i++){
		A[i]=0;
	}
	for(i=0;i<N;i++){
		int x;
		scanf("%d",&x);
		A[i]=x;
	}
	int v;
	int k;
	for(i=1;i<=N-1;i++){
		for(k=0;k<N;k++){
			printf("%d ",A[k]);
		}
		printf("\n");
		v=A[i];
		j=i-1;
		while(j>=0 && A[j]>v){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=v;
	}
	for(i=0;i<N;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
	return 0;
}