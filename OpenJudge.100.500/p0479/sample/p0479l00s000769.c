#include <stdio.h>
#include <string.h>

long A[1000100];
int main(){

	long int i,j;
	long int x,y,a,b,c;
	long N,M,tmp;
	long long sum=0;
	scanf("%ld",&N);
	
	for(i=0;i<N-1;i++){
		
		scanf("%ld",&tmp);
		A[tmp]++;
	}
	
	for(i=1;i<=N;i++){
		printf("%ld\n",A[i]);
	}

	return 0;
}
