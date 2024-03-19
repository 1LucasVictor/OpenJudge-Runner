#include <stdio.h>

int main(){
	int N,A,B;
	int min;
	char s[101];

	scanf("%d %d %d",&N,&A,&B);
	if(N*A < B){ min = A*N;
	}else{	min = B;}

	printf("%d \n",min);
	return 0;
}