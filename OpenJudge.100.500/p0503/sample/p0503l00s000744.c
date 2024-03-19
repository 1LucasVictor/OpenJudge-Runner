#include <stdio.h>
#include <stdlib.h>

long acs(const void *a,const void *b){
	
	return *(long *)a - *(long *)b;	
}
int main(){
	long N;
	long A[200200];
	scanf("%ld",&N);
	
	for(int i=0;i<N;i++){
		scanf("%ld",&A[i]);
	}
	
	qsort(A,N,sizeof(long),acs);
	
	for(int i=0;i<N;i++){
		if(A[i]==A[i+1]){
			printf("NO\n");
			return 0;
		}	
	}
	printf("YES\n");
	return 0;	
}