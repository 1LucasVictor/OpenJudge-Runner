#include<stdio.h>
int main(void){
	int i,j,N,k;
	int v;
	scanf("%d",&N);
	int a[N];
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<N;i++){
		printf("%d",a[i]);
	}
	for (i=1;i<=N-1;i++){
		printf("\n");
		v=a[i];
		j=i-1;
		while(j>=0 && a[j]>v){
			a[j+1]=a[j];
			j--;
		}
			a[j+1]=v;
		
	for(k=0;k<N;k++){
		printf("%d",a[k]);
	}
	}
	printf("\n");
	return 0;
}