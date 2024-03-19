#include <stdio.h>

int main (void){

	int A[100];
	int N;
	int c=0,s;
	int i,j;
	
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	
	for(j=0;j<N;j++){
		for(i=N;i>j;i--){
			if(A[i]<A[i-1]){
				s=A[i];
				A[i]=A[i-1];
				A[i-1]=s;
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