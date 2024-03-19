#include <stdio.h>

int main()
{
	int K,L,M,N;

	scanf("%d",&N);
	K = N / 100;
	M = N % 10;
	L = N - K * 100 - M;

	if (K == 7 || L == 7 || M == 7){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
}
