#include<stdio.h>
int main(void){
	int N,i,A;
	scanf("%d",&N);
	int S[N];
	for(i=0;i<N;i++){
		S[i]=0;
	}
	for(i=1;i<N;i++){
		scanf("%d",&A);
		S[A-1]=S[A-1]+1;
	}
	for(i=0;i<N;i++){
	printf("%d\n",S[i]);
	}
	return 0;
}
