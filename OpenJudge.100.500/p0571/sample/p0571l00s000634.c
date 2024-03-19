#include<stdio.h>

int main(){
	int N;
	int A;
	int B;

	scanf("%d %d %d",&N,&A,&B);

	if(N*A<B){
		printf("%d",N*A);
	}else{
		printf("%d",B);
	}

	return 0;
}