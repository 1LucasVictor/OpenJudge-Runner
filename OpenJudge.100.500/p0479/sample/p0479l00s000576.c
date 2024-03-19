#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int N=0,i=0;
	int A[200000];
	int B[200000]={};
	
	scanf("%d",&N);
	
	while(i<N-1){
		scanf("%d",&A[i]);
		B[A[i]]++;		
		i++;
	}
	
	for(i=1;i<=N;i++){
		printf("%d\n", B[i]);
	}


	return 0;
}
