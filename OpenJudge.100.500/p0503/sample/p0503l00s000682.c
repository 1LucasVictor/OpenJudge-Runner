#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	int  N,i,j;
	scanf("%d",&N);

	long A[N];
	for(i=0;i<N-1;i++) scanf("%ld",&A[i]);
	scanf("%ld",&A[i]);

	for(i=0;i<N-1;i++) {
		for(j=i+1;j<N;j++){
			if(A[i]==A[j])
			{printf("NO");return 0;}
		}
	}
	printf("YES");
	return 0;
}
