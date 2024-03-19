#include <stdio.h>

int main (void){
	
	int A[100];
	int N;
	int c=0;
	int i,j;
	int x;
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	
	for(j=0;j<=N;j++){
		for(i=N;i>j;i--){
			if(A[i]<A[i-1]){
				x=A[i];
				A[i]=A[i-1];
				A[i-1]=x;
				c++;
			}
		}
	}
	
	for(i=0;i<N;i++){
		printf("%d ",A[i]);
		
	}
	
	printf("\n");
	printf("%d\n",c);
	
	
	return 0;
}