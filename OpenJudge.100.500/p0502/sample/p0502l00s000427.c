#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	int  N,A[100];
	int i;

	scanf("%d",&N);

	for(i=0;i<N-1;i++) scanf("%d ",&A[i]);
	scanf("%d",&A[i]);

	for(i=0;i<N;i++){
		if(A[i]%2) continue;   //奇数
		if(A[i]%3 && A[i]%5)
  	      {printf("DENIED");return 0;}
	}
	printf("APPROVED");
	return 0;
}