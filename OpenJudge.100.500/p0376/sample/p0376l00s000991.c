#include<stdio.h>
int main(void){
	int i,j,N,a[100];
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	for(j=N-1;j>=1;j--){
		printf("%d ",a[j]);
	}
	printf("%d",a[0]);
	printf("\n");
	return 0;
}