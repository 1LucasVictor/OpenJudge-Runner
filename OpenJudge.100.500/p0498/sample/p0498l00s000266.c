#include<stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	if(N%2==0){
		N = N / 2;
	}else{
		N = (N / 2) + 1;

	}
	printf("%d", N);
	return 0;
}