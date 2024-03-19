#include <stdio.h>
int main(void){
	int N;
	scanf("%d",&N);
	
	int A[100];
	int i;
	int t=0;
	
	for(i = 0;i < N;i++){
		scanf("%d",&A[i]);
	}
	
	for(i = 0;i < N; i++){
		if(A[i]%2 == 0 ){
			if(A[i]%3 != 0 && A[i]%5 != 0) {
				printf("DENIED\n");
				return 0;
			}
		}
	}
	
	printf("APPROVED\n");
	return 0;
}