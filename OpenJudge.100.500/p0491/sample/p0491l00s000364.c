#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

	long int  i,j;
	int 	x,y,a,b,c;
	long int N,K,prev_N;
	long sum=0;
	scanf("%ld%ld",&N,&K);
	N=N%K;
	if(K==1){
		printf("0\n");
		return 0;
	}
	prev_N=N+1;
	for(;prev_N>N;){
		prev_N=N;
		
		N=labs(N-K);
	}
	printf("%ld\n",prev_N);
 return 0;
 }