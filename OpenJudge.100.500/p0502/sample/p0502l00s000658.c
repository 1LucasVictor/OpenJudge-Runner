#include<stdio.h>
#include<stdlib.h>

int main(){
	int N;
	int A[100];
	int i;

	scanf("%d",&N);

	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}

	for(i=0;i<N;i++){
		if(A[i]%2 == 0){
			if(A[i]%3 != 0 && A[i]%5 != 0){
				printf("DENIED\n");
				return 0;
			}
			
		}

	}

	printf("APPROVED\n");

	return 0;
}