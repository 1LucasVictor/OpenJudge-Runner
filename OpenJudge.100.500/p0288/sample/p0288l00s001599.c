#include<stdio.h>
int main(void){
	int i,j,v,A[20000],k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
/*
	for(i=0;i<n;i++){
		printf("%d",A[i]);
	}
	printf("\n");
*/

	for(i=0;i<n;i++){
		v=A[i];
		j=i-1;
		while(j>=0&&A[j]>v){
			A[j+1]=A[j];
			j--;
			A[j+1]=v;
		}
		for(k=0;k<n;k++){
			printf("%d",A[k]);
		}
		printf("\n");
	}
	return 0;
}